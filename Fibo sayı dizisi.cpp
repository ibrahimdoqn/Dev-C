#include<stdio.h>
#include<iostream>
//FiboSayi dizisi
main()
{
	int a[2],b;
	a[0]=0;a[1]=1;
	basla:
	printf("%d",a[0]);a[0]+=a[1];b++;
	printf(",%d,",a[1]);a[1]+=a[0];b++;
	if(b==20)exit(0);
	goto basla;
}
