#include<stdio.h>
#include<conio.h>//Getch için
main()
{
	int a;
	a=10;
	do
	{
		printf("Bilgisayar - %d\n",a);
		a=a-2;
	}
	while(a>=2);
	getch();
}
