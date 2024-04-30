import os
import shutil
fmts = ['rs','cpp','c','py','cs']

root = os.path.split(os.path.abspath(__file__))[0]
for fmt in fmts:
    path = os.path.sep.join([root,fmt])
    for f in os.listdir(path):
        if (not f.endswith(fmt)):
            src = os.path.sep.join([path,f]) 
            dst = os.path.sep.join([root,f.split('.')[-1],f]) 
            print("move from : " + src)
            print("move  to  : " + dst)
            
            if( not os.path.isdir(os.path.split(dst)[0]) ):
                print("create dir :" + os.path.split(dst)[0])
                os.mkdir(os.path.split(dst)[0])
            shutil.move(src,dst)
