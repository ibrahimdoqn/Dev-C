#include<stdio.h>
#include<conio.h>
#include<iostream>
main()
{
	int a,b,i,islem;
	int f;
	basla:
	system("cls");
	printf("1. sayýyý giriniz...:");scanf("%d",&a);
	printf("2.sayýyý giriniz...:");scanf("%d",&b);
	printf("islem giriniz(Toplam-1 Cikarma-2 Bolme-3 Carpma-4)");
	scanf("%d",&i);
		if(i==1) islem=a+b;
		if(i==2) islem=a-b;
		if(i==3) islem=a/b;
		if(i==4) islem=a*b;
	printf("\nsonuc....%d", islem);
	bitis:
	printf("\n\n Cikis icin ESC");scanf("%c",&f);
		f=getch();
		if(f==27) exit(0);
		if(f==13)goto basla;
		goto bitis;
}
