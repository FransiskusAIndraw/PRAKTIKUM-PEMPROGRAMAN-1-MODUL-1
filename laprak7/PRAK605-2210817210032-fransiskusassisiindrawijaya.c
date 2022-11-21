#include<stdio.h>
int main(){
int matA[10][10], matB[10][10], matAXB[10][10];
int i, j, k, n, jumlah=0;
scanf("%d", &n);
printf("Matriks A\n");
for(i=0; i<n; i++){
for(j=0; j<n; j++){
scanf("%d", &matA[i][j]);}}
printf("Matriks B\n");
for(i=0; i<n; i++){
for(j=0; j<n; j++){
scanf("%d", &matB[i][j]);}}
for(i=0; i<n; i++){
for(j=0; j<n; j++){
for(k=0; k<n; k++){
jumlah = jumlah + matA[i][k] * matB[k][j];}
matAXB[i][j] = jumlah;
jumlah = 0;}}
printf("Matriks AXB\n");
for(i=0; i<n; i++){
for(j=0; j<n; j++){
printf("%d ", matAXB[i][j]);}
printf("\n");}
return 0;}