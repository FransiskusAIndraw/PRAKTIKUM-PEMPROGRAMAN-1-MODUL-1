#include <stdio.h>
int main (){
float jari,ting,volu,luas,kel1,phi;
phi = 3.14;
scanf("%f %f", &jari, &ting);
volu = phi*jari*jari*ting;
luas = (2*phi*jari*ting)+(2*phi*jari*jari);
kel1 = 2*phi*jari;
printf("Volume = %.2f\n", volu);
printf("luas = %.2f\n", luas);
printf("Keliling = %.2f\n", kel1);
return 0;}   