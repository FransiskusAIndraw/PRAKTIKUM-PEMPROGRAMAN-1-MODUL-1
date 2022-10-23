#include <stdio.h>
int main (){
char nama[50],alamat[50],hobby[50];
int nim[50],kelas[50],nohp[50],ttl[50];
printf("Nama                 :");
gets(nama);
printf("NIM                  :");
gets(nim);
printf("Kelas Pararel        :");
gets(kelas);
printf("Tempat/Tanggal Lahir :");
gets(ttl);
printf("Alamat               :");
gets(alamat);
printf("Hobby                :");
gets(hobby);
printf("No. HP               :");
gets(nohp);
printf("\n\n");
printf("Nama                 :%s\n", nama);
printf("NIM                  :%d\n",nim);
printf("Kelas Pararel        :%d\n",kelas);
printf("Tempat/Tanggal Lahir :%d\n",ttl);
printf("Alamat               :%s\n",alamat);
printf("Hobby                :%s\n",hobby);
printf("No, HP               :%d\n",nohp);
system("pause");
return 0;}
