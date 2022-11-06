#include <stdio.h>
int main(){
int i,a,s;
scanf("%d %c", &a, &s);
for(i=1; i<=50; i++){
      if (i%a == 0)
      {printf("%c ",s);}
      else
      {printf("%d ",i);}}
return 0;}