a,b=map(int,input().split())
if (a==b):
    b1=list(map(int,input().split()))
    b2=list(map(int,input().split()))
    for i in range (a):
        print(b1[i]*b2[i],end=' ')
else:
    print("Jumlah tidak sama")