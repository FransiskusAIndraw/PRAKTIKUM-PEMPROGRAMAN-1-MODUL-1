#include <stdio.h>
int main(){
float sepa, sepb, diska,diskb,h1,h2;
sepa = 400000, sepb= 350000, diska = 13, diskb = 21;
h1 = sepa - diska/100 * sepa;
h2 = sepb - diskb/100 * sepb;
printf("Harga sepatu A adalah %.f\n", sepa);
printf("Harga sepatu B adalah %.f\n", sepb);
printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.f\n", h1);
printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.f\n", h2);
return 0;}