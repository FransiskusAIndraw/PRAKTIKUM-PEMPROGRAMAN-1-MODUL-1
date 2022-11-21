#include<stdio.h>
int main(){
int bar1, bar2, isi;
scanf("%d %d", &bar1, &bar2);
int an1[bar1], an2[bar2];
if(bar1 != bar2){
printf("Jumlah tidak sama");
} else {
for(int i = 0; i < bar1; i++){
scanf("%d", &isi);
an1[i] = isi;}
for(int i = 0; i < bar2; i++){
scanf("%d", &isi);
an2[i] = isi;}
for(int i = 0; i < bar2; i++){
printf("%d ", an1[i] * an2[i]);}}
return 0;}