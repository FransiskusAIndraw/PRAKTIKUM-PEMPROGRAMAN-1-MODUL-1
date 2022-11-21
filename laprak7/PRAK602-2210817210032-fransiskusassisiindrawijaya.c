#include <stdio.h>
int main (){
int x = 0;
int bar,isi;
scanf("%d", &bar);
int angka[bar];
for (int i = 0; i < bar; i++){
scanf("%d", &isi);
angka[i] = isi;}
printf("\n");
for (int i = 0; i <bar; i++){
printf("%d ", angka[i] * (i + 1));}
return 0;}