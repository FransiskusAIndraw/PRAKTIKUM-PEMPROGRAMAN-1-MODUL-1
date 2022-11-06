while (True):
    print("Pilih program")
    print("1.Penjumlahan")
    print("2.Pengurangan")
    print("3.Perkalian")
    print("4.Pembagian")
    print("5.Exit")
    pil=float(input("Masukkan Pilihan :"))
    if pil==5:
        break
    elif pil>=6:
        print("Input anda salah,silahkan coba lagi\n")
        continue
    a1=float(input("Masukkan nilai pertama :"))
    a2=float(input("Masukkan nilai kedua :"))
    if pil==1:
        haspen = (a1+a2)
        print("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n"%(a1, a2, haspen)) 
    elif pil==2:
         haspen = (a1-a2) 
         print("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n"%(a1, a2, haspen))
    elif pil==3:
         haspen = (a1*a2) 
         print("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n"%(a1, a2, haspen)) 
    elif pil==4:
         haspen = (a1/a2) 
         print("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n"%(a1, a2 , haspen))
print("Terimakasih Telah Menggunakan kalkulator Fransiskus Assisi Indra Wijaya")