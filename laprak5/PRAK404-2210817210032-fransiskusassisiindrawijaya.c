#include <stdio.h>
int main(){
int opt;
float v1, v2, res;
while (opt != 5)
{printf("pilih program\n 1. Penjumlahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n 5. Exit\n");
printf("Masukkan Pilihan: ");
scanf("%d", &opt);
if (opt >5 || opt <1)
{printf("Input anda salah, Silahkan coba lagi\n\n");}
if (opt == 1)
{printf("Masukkan Nilai Pertama: ");scanf("%f",&v1);
printf("Masukkan Nilai Kedua: ");scanf("%f", &v2);
res = v1+v2;
printf("Hasil penjumlahan dari %.2f dengan %.2f adalah %.2f\n\n", v1,v2,res);}
else if (opt == 2)
{printf("Masukkan Nilai Pertama: ");scanf("%f",&v1);
printf("Masukkan Nilai Kedua: ");scanf("%f", &v2);
res = v1-v2;
printf("Hasil pengurangan dari %.2f dengan %.2f adalah %.2f\n\n", v1,v2,res);}
else if (opt == 3)
{printf("Masukkan Nilai Pertama: ");scanf("%f",&v1);
printf("Masukkan Nilai Kedua: ");scanf("%f", &v2);
res = v1*v2;
printf("Hasil perkalian dari %.2f dengan %.2f adalah %.2f\n\n", v1,v2,res);}
else if (opt == 4)
{printf("Masukkan Nilai Pertama: ");scanf("%f",&v1);
printf("Masukkan Nilai Kedua: ");scanf("%f", &v2);
res = v1/v2;
printf("Hasil pembagian dari %.2f dengan %.2f adalah %.2f\n\n", v1,v2,res);}
if (opt == 5 )
{printf("Terimakasih, telah menggunakan kalkulator Fransiskus Assisi indra");}}
return 0;}
    