a=int(input())
MA=[]
print('Matriks A')
for i in range (a):
    k=list(map(int,input().split()))
    MA.append(k)
MB=[]
print('Matriks B')
for i in range (a):
    k=list(map(int,input().split()))
    MB.append(k)
MAXB=[]
print('Matriks AXB')
for i in range (a):
    MAXB.append([])
    for j in range (a):
        y=0
        for k in range (a):
            y=y+MA[i][k]*MB[k][j]
        MAXB[i].append(y)
for baris in MAXB:
    for k in baris:
        print(k,end=' ')
    print()