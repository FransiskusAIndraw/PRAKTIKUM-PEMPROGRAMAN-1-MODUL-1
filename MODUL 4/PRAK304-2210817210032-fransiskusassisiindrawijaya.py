n = int(input())
if n>=1 and n<=9:
   print("Satuan")
elif n>=10 and n<=19:
   print("Belasan")
elif n>=20 and n<=99:
   print("Puluhan")
elif n<1:
   print("nol")
else:
   print("Anda Menginput Melebihi Limit Bilangan")
