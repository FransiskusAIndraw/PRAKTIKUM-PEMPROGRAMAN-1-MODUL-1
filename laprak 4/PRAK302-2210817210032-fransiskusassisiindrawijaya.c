#include<stdio.h>
int main(){
int n;
scanf("%i", &n);
if (n>= 80 && n<=100)
{printf("A", n);}
else if (n>= 70 && n<=79)
{printf("B");}
else if (n >= 60 && n<= 69 )
{printf("C", n);}
else if (n >= 50 && n<= 59 )
{printf("D", n);}
else if (n < 50 )
{printf("E", n);}
return 0;
}