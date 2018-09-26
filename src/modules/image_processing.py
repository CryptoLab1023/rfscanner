#!/home/ubuntu/miniconda3/bin/python
import psycopg2
from datetime import date, timedelta
import os.path
from detect_faces import has_face
from detect_motion import has_motion

input_path = "./img/upload/"

connector = psycopg2.connect(host="localhost:5432", database="sample", user="root", password="secret")
cursor = connector.cursor()

sql = "SELECT interval, mid FROM danger_mid WHERE danger=1 AND movement=-1;"
cursor.execute(sql)
results = cursor.fetchall()
# cursor.close()
# connector.close()

# print(result)

processed_images =[]

for result in results:
    time_approx = result[0]
    m_id = result[1]
    found_image = False

    # Search for filenames with timestamps near time_approx
    for delta_seconds in range(-16,16):
        time_test = time_approx + timedelta(0,delta_seconds)
        file_name = date.strftime(time_test, "%Y-%m-%d_%H%M%S_0.jpg")
        image_file = input_path + file_name
        found_image = os.path.isfile(image_file)
        if found_image:
            break

    if found_image:
        image_basename = date.strftime(time_test, "%Y-%m-%d_%H%M%S")
        if (processed_images.count(image_basename) > 0):
            break
        processed_images.append(image_basename)
        print('File {} found near time {}'.format(image_file, date.strftime(time_approx, "%Y-%m-%d_%H%M%S")))
        print('m_id: {}'.format(m_id))

        # Check for faces
        found_face = has_face(image_basename+"_0")
        print("Found face: {}".format(found_face))

        # Check for motion
        image_filenames = [image_basename+"_"+str(i)+".jpg" for i in range(5)]
        found_motion = has_motion(image_filenames)
        print("Found motion: {}".format(found_motion))

        sql = "UPDATE danger_mid SET face={}, movement={} WHERE mid='{}';".format(int(found_face),int(found_motion), m_id)
        cursor.execute(sql)

connector.commit()
cursor.close()
connector.close()
