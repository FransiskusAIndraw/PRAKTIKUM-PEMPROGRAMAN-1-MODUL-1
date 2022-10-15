from math import sqrt
alas,tinggi = 5,12
simir = sqrt((alas*alas)+(tinggi*tinggi))
kel1 = alas+tinggi+simir
luas = 1/2*alas*tinggi
print("Diketahui:")
print("Alas : ",alas)
print("Tinggi :%d\n" %(tinggi))
print("Jawab: ")
print("Sisi A :",alas)
print("Sisi B :",tinggi)
print("Sisi C :",int(simir))
print("Keliling :",int(kel1))
print("Luas :", int(luas))