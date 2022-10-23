#include <stdio.h>
#include <math.h>
int main (){
float ting,simi,alas,kel1,luas;
scanf("%f %f", &ting, &simi);
alas = sqrt((simi*simi)-(ting*ting));
kel1 = ting+simi+alas;
luas = (alas*ting)/2;
printf("Alas = %.fcm\n", alas);
printf("Tinggi = %.fcm\n",ting);
printf("Keliling = %.fcm\n",kel1);
printf("Luas = %.fcm^2",luas);
return 0;}   