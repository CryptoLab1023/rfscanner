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

def has_face(image_basename):
    input_path = "/home/ubuntu/workspace/bousai4/static/img/upload/"
    output_path = "/home/ubuntu/workspace/bousai4/static/img/faces/"
    input_file = input_path + image_basename + '.jpg'
    output_file = output_path + image_basename + '_faces.jpg'
    
    # Create the haar cascade
    faceCascade = cv2.CascadeClassifier("haarcascade_frontalface_default.xml")
    
    # Read the image
    image = cv2.imread(input_file)
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
        
        # print("Found {0} face(s) at an angle of {1} degree(s)".format(len(faces), rot_angle))
        if len(faces)>0:
            break
        
    if len(faces)>0:
        color_rot = rotate_image(image, rot_angle)
        # Draw a rectangle around the faces
        for (x, y, w, h) in faces:
            cv2.rectangle(color_rot, (x, y), (x+w, y+h), (0, 0, 255), 2)
        
        height, width = color_rot.shape[:2]
        padding = 100
        
        y0 = y-padding
        y1 = y+h+padding
        x0 = x-padding
        x1 = x+h+padding
        
        if y0<0:
            y1 = y1-y0
            y0 = 0
        if x0<0:
            x1 = x1-y0
            x0 = 0
        
        if y1>height:
            y0 = y0-(y1-height)
            y1 = height
        if x1>height:
            x0 = x0-(x1-height)
            x1 = height
        
        color_rot_crop = color_rot[max(0,y0):min(width,y1), max(0,x0):min(height,x1)]
        cv2.imwrite(input_file, color_rot_crop)
        return True
    else:
        return False


if __name__ == '__main__':
    print(has_face("2017-01-21_194026_0"))