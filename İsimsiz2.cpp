#include<stdio.h>
#include<iostream>
main()
{
	int a;
	basla:
	a=a+1;
	printf("Bilgisayar ...:%d\n",a);
	if(a==5)exit(0);
	goto basla;
}
