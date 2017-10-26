#include<stdio.h>
#include<conio.h>
#include<iostream>
main()
{
	int a,b,i,islem;
	char c;
	basla:
	system("cls");
	printf("1. sayıyı giriniz...:");scanf("%d",&a);
	printf("2.sayıyı giriniz...:");scanf("%d",&b);
	printf("islem giriniz(Toplam-1 Cikarma-2 Bolme-3 Carpma-4)");
	scanf("%d",&i);
		if(i==1) islem=a+b;
		if(i==2) islem=a-b;
		if(i==3) islem=a/b;
		if(i==4) islem=a*b;
	printf("\nsonuc....%d", islem);
	printf("\n\n Cikis icin q.. Devam icin diger sayılar..");fflush(stdin);scanf("%c",&c);
		if(c=='q') exit(0);
	goto basla;	                                                                                                       	
}
