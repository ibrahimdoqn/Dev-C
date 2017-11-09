#include<stdio.h>
#include<conio.h>
#include<iostream>
main()
{
	int a,b;b=0;
	basla:
		b++;
		hata:
		system("cls");
	printf("Bir sayi giriniz...:");scanf("%d",&a);
	switch(a)
	{
		case 20: printf("Denizli");break;
		case 48: printf("Mugla");break;
		case 42: printf("Konya");break;
		case 32: printf("Isparta");break;
		case 34: printf("Istanbul");break;
		default: printf("Tekrar Deneyiniz");getch();goto hata;
	}
	getch();if(b==3)exit(0);
	goto basla;
}
