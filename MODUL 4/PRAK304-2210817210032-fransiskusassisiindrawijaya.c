#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
if (n>=1 && n<=9)
{printf("Satuan");}
else if (n>=10 && n<=19)
{printf("Belasan");}
else if (n>=20 && n<=99)
{printf("Puluhan");}
else if (n<1)
{printf("nol");}
else
{printf("Anda Menginput Melebihi Limit Bilangan");}
return 0;}