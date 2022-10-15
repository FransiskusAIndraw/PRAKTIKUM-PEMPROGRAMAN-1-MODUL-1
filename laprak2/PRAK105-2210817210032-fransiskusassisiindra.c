#include <stdio.h>
int main(){
int a,b,x,y,tsb, tsb1, trueres;
a = 9,b = 5, x = 8,y = 8;
tsb = a % b, tsb1 = x%y;
trueres = tsb1 + tsb;
printf("variabel a bernilai %i\n", a);
printf("variabel b bernilai %i\n", b);
printf("variabel x bernilai %i\n", x);
printf("variabel y bernilai %i\n", y);
printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %i\n", trueres);
return 0;}