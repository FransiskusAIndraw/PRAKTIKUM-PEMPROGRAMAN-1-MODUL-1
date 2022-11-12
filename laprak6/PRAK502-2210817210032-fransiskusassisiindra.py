def hitung (nilai1, nilai2):
    return nilai1 - nilai2
def mutlak (angka):
    return abs(angka)
a,b,c,d = input().split()
a = int(a)
c = int(c)
b = int(b)
d = int(d)
hasil = hitung(a,c) + hitung(b,d)
print(mutlak(hasil))