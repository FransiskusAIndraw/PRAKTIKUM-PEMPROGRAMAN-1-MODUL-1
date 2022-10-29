#include <stdio.h>
int main() {
int sec, h, m, s, d,hd;
scanf("%d", &sec);
d = (sec/86400);
h = (sec/3600); 
m = (sec -(3600*h))/60;	
s = (sec -(3600*h)-(m*60));
hd = (h-24);
if (h >= 24)
{printf("%02d hari %02d:%02d:%02d",d,hd,m,s);}
else if (h<=23)
{printf("%02d:%02d:%02d\n",h,m,s);}
return 0;}
