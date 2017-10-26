#include<stdio.h>
#include<iostream>//exit(0) kullanımı için
main()
{
	int a;//Değişken
	basla:
	a=a+1;
	printf("Bilgisayar ...:%d\n",a);
	if(a==5)exit(0);
	goto basla;//başla kısmına dönüş
}
