#!/home/ubuntu/miniconda3/bin/python
import cv2
import sys
import os

def rotate_image(image, angle):
    if angle == 0: return image
    height, width = image.shape[:2]
    rot_mat = cv2.getRotationMatrix2D((width/2, height/2), angle, 0.9)
    result = cv2.warpAffine(image, rot_mat, (width, height), flags=cv2.INTER_LINEAR)
    return result

# Get user supplied values
imagePath = sys.argv[1]
cascPath = sys.argv[2]

# Create the haar cascade
faceCascade = cv2.CascadeClassifier(cascPath)

# Read the image
image = cv2.imread(imagePath)
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

angle_max = 180
angle_step = 20
list1 = list(range(0, angle_max-angle_step+1, angle_step))
list2 = list(range(-angle_step, -angle_max-1, -angle_step))
rot_angles = [None]*(len(list1)+len(list2))
rot_angles[::2] = list1
rot_angles[1::2] = list2

for rot_angle in rot_angles:
    gray_rot = rotate_image(gray, rot_angle)
    
    # Detect faces in the image
    faces = faceCascade.detectMultiScale(
        gray_rot,
        scaleFactor=1.1,
        minNeighbors=5,
        minSize=(30, 30)
    )
    
    print("Found {0} faces at angle{1}".format(len(faces), rot_angle))
    if len(faces)>0:
        break

# Draw a rectangle around the faces
for (x, y, w, h) in faces:
    cv2.rectangle(gray_rot, (x, y), (x+w, y+h), (0, 255, 0), 2)

# cv2.imshow("Faces found", image)

cwd = os.getcwd()
img_name = os.path.splitext(imagePath)[0]
outfname = cwd + "/tmp/%s_faces.jpg" % img_name
cv2.imwrite(os.path.expanduser(outfname), gray_rot)

