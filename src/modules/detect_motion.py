#!/home/ubuntu/miniconda3/bin/python
import numpy as np
from PIL import Image
import imagehash

def has_motion(filenames):
    input_path = "/home/ubuntu/workspace/bousai4/static/img/upload/"
    
    input_files = [input_path+filename for filename in filenames]
    hashes = [imagehash.phash(Image.open(file)) for file in input_files]
    
    diff_sum = 0
    for i in range(5):
        diff = hashes[i] - hashes[(i+1)%5]
        diff_sum += diff
        #print(diff)
    
    #print()
    # print(diff_sum)
    return (diff_sum > 20)

if __name__ == '__main__':
    img_ids1 = [314, 320, 326, 332, 338] # Face, not moving
    img_ids2 = [426, 431, 437, 443, 449] # Face, moving
    img_ids3 = [536, 542, 547, 553, 559] # No face
    
    filenames = ['2017-01-21_'+str(id+174000)+'.jpg' for id in img_ids2]
    
    print(has_motion(filenames))
    # print(compare(img_ids2))
    # print(compare(img_ids3))