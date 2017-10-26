#include<stdio.h>
#include<iostream>
//FiboSayý dizisi
main()
{
	int a[2],b;
	a[0]=0;a[1]=1;
	basla:
	printf("%d,%d,",a[0],a[1]);
	b=b+1;
	a[0]+=a[1];a[1]+=a[0];
	if(b==10)exit(0);
	goto basla;
}
