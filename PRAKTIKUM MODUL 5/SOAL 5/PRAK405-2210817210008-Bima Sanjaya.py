a,b=input().split()
a=int(a)
b=int(b)
i=0;x=0;y=0;z=0
while i<a:
    i+=1;j=i
    if i==0:break
    while j>0:
        j-=1
        print("(%d*%d)"%(j+1,b),end="")
        if(j>0):
            print("+",end="")
    x=i*b
    y+=x
    print("=%d"%(y))
    z+=y
    print("%d"%(z))
    