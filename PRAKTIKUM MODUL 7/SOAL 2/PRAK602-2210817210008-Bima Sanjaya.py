kolom=int(input())
isi=[]
m=list(map(int,input().split()))
for i in range (kolom):
    print((i+1)*m[i],end=' ')