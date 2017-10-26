#include<stdio.h>
#include<conio.h>//Getch için
main()
{
	int a;
	a=10;
	while(a>=2)
	{
		printf("Bilgisayar - %d\n",a);
		a=a-2;
	}
	getch();
}
