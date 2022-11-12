#include <stdio.h>
void biodata(int tahunlahir, char *Namaku, char *Asal){
int tahun_sekarang = 2020;
printf("\nPrerkenalkan Nama Saya : %s\n", Namaku);
printf("Umur Saya : %d\n",tahun_sekarang - tahunlahir);
printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
printf("Asal saya dari : %s", Asal);}
int main() {
int tahunLahir;
char Namaku[20], Asal[15];
scanf(" %d",&tahunLahir);
scanf(" %s[^\n]%*c",&Namaku);
scanf(" %s[^\n]%*c",&Asal);
biodata(tahunLahir, Namaku, Asal);
return 0;}
