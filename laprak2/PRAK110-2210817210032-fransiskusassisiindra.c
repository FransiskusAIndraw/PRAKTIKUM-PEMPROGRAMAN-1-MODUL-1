#include <stdio.h>
#include <math.h>
int main(){
float alas,tinggi,simir,kel1,luas;
alas = 5, tinggi = 12;
simir = sqrt((alas*alas)+(tinggi*tinggi));
kel1 = alas + tinggi + simir;
luas = 0.5 *alas*tinggi;
printf("Diketahui :");
printf("Alas = %.f\n",alas);
printf("Tinggi = %.f\n\n", tinggi);
printf("Jawab :\n");
printf("Sisi A = %.f cm\n", alas);
printf("Sisi b = %.f cm\n", tinggi);
printf("Sisi C = %.f cm\n", simir);
printf("Keliling = %.f cm\n", kel1);
printf("Luas = %.f cm\n", luas);
return 0;}