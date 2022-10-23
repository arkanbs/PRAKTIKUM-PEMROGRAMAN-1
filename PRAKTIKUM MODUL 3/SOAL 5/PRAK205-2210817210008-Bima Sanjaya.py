import math
a,b=map(float,input().split())
c=math.sqrt(pow(b,2)-pow(a,2))
k=a+b+c
l=(c*a)/2
print("Alas = %.f cm"%c)
print("Tinggi = %.f cm"%a)
print("Keliling = %.f cm"%k)
print("Luas = %.f cm\u00B2"%l,"\n")
a2=float(input())
b2=float(input())
c2=math.sqrt(pow(b2,2)-pow(a2,2))
k2=a2+b2+c2
l2=(c2*a2)/2
print("Alas = %.f cm"%c2)
print("Tinggi = %.f cm"%a2)
print("Keliling = %.f cm"%k2)
print("Luas = %.f cm\u00B2"%l2)