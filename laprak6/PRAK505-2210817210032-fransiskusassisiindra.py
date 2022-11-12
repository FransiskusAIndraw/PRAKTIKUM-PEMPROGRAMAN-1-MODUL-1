def biodata(tahunlahir,A,B):
    tahun_sekarang = 2022
    umur = tahun_sekarang - tahunlahir
    print('\nPerkenalkan Nama Saya : ' + A)
    print("Umur Saya : %d" %(umur))
    print('Saya Adalah Angkatan :', tahun_sekarang)
    print('Asal Saya Dari : '+ B )
tahunlahir = int(input())
A = str(input())
B = str(input())
biodata(tahunlahir, A, B)