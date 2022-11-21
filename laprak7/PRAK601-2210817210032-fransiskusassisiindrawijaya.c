#include<stdio.h>
int main(){
int mat[10][10],i,j,dc,cd;
scanf("%d %d", &cd, &dc);
for(i=0;i<cd;i++){
for(j=0;j<dc;j++){
scanf("%d",&mat[i][j]);}}
printf("\n");
for(i=0;i<cd;i++){
for(j=0;j<dc;j++){
printf("%d ",mat[i][j]);}
printf("\n");}}