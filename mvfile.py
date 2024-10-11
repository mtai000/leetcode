import os
import shutil
fmts = ['rs','cpp','c','py','cs']

def move_file(src,dst):
    print("move from : " + src)
    print("move  to  : " + dst)
    
    if( not os.path.isdir(os.path.split(dst)[-2]) ):
        print(os.path.split(dst)[-2])
        print("create dir :" + os.path.split(dst)[-2])
        os.mkdir(os.path.split(dst)[-2])
    shutil.move(src,dst)

root = os.path.split(os.path.abspath(__file__))[0]
for fmt in fmts:
    path = os.path.sep.join([root,fmt])
    for f in os.listdir(path):
        if (not f.endswith(fmt)):
            src = os.path.sep.join([path,f]) 
            dst = os.path.sep.join([root,f.split('.')[-1],f]) 
            move_file(src,dst) 

for f in os.listdir(root):
    if(f == os.path.split(__file__)[-1] or os.path.isdir(f)):
        continue
    for fmt in fmts:
        if(f.endswith(fmt)):
            src = os.path.sep.join([root,f])
            dst = os.path.sep.join([root,f.split('.')[-1],f])
            move_file(src,dst)

