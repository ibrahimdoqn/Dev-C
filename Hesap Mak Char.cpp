#include <stdio.h>
#include <conio.h>
main ()
{
  int say1,say2,son=0;
  char  a[5];
  printf("1. sayiyi giriniz ..:");scanf("%d",&say1);
  printf("2. sayiyi giriniz ..:");scanf("%d",&say2);
  fflush(stdin);
  printf(" toplanma-top,carpma-car,cikarma-cik..:");scanf("%s",&a);
  //printf("adi ...:%s -- %d --- %d ",a,say1,say2);

  if (a[0]=='t'&&a[1]=='o'&&a[2]=='p') son=say1+say2;
  if (a[0]=='c'&&a[1]=='a'&&a[2]=='r') son=say1*say2;
  if (a[0]=='c'&&a[1]=='i'&&a[2]=='k') son=say1-say2;

printf("sonuc ....:%d",son);
 printf("\n\n\n Devam icin bir tusa tiklayiniz");
getch();
}
