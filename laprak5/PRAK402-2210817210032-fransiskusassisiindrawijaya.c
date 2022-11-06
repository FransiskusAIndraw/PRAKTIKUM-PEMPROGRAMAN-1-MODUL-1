#include <stdio.h>
int main(){
int in,ogen,ogan;
scanf("%d",&in);
for ( ogan = 1; ogan <=in; ogan++)
if (ogan%2==0)
{printf("%d ",ogan);}
printf("\n");
for ( ogen = in; ogen >= 1; ogen--)
{if (ogen%2==1)
{printf("%d ",ogen);}}
return 0;}