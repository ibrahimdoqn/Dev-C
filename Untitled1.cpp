#include <stdio.h>
#include <iostream>
main()
{
	int a;
	basla:
	a+=1;
	printf("%d bilgi%dsayar%d\n",a,a*2+5,11-a);
	if(a==10)exit(0);
	goto basla;
}
