x,y=map(int,input().split())
i=int(x);j=int(y)
if x>y:
    while i>=int(y) and j<=int(x):
        print(i,end=' ');print(j,end=' ')
        i-=1;j+=1
        if i==int(y)-1:break
        else:print("-",end=' ')
if x<y:
    while i<=int(y) and j>=int(x):
        print(i,end=' ');print(j,end=' ')
        i+=1;j-=1
        if j==int(x)-1:break
        else:print("-",end=' ')