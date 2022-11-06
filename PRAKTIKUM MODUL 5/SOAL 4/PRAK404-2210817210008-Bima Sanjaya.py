while True:
    print("Pilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
    c=int(input("Masukkan Pilihan: "))
    if c==5:
        print("Terimakasih, telah menggunakan kalkulator Bima");break
    elif c>5 or c<=0:
        print("Input anda salah, silahkan coba lagi\n");continue
    else: 
        x=float(input("Masukkan nilai pertama: "))
        y=float(input("Masukkan nilai kedua: "))
        if c==1:
            print("Hasil pertambahan antara %.2f dengan %.2f adalah %.2f\n"%(x,y,x+y))
        elif c==2:
            print("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n"%(x,y,x-y))
        elif c==3:
            print("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n"%(x,y,x*y))
        elif c==4:
            print("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n"%(x,y,x/y))