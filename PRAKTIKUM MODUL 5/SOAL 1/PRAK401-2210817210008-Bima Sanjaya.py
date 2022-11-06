a,s=input().split()
x=int(a)
for i in range(1,51):
    if(i%x==0):
        print(s, end=' ')
    else:
        print(i, end=' ')