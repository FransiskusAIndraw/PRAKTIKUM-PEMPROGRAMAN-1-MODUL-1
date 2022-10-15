#include <stdio.h>
int main(){
int a,b,c,has1,has2,has3;
a = 4, b = 8,c = 3;
has1 = a==b;
has2 = a>=c;
has3 = a!=c;
printf("Variabel a bernilai %i\n", a);
printf("Variabel b bernilai %i\n", b);
printf("Variabel c bernilai %i\n", c);
printf("Apakah a sama dengan b ? jawabannya adalah %i\n", has1);
printf("Apakah b lebih besar dari c ? jawabannya adalah %i\n", has2);
printf("Apakah a tidak sama dengan c ? jawabannya adalah %i\n",has3);
return 0;}