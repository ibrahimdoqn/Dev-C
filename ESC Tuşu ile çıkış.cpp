#include<stdio.h>
#include<conio.h>
#include<iostream>
main()
{
   int a,b,i,islem;
   int f;
   
   basla:
   	 system("cls");//iostream
   	 printf("1. sayiyi giriniz...:"); scanf("%d",&a);
   	 printf("2.sayiyi giriniz...:"); scanf("%d",&b);
     printf("islem giriniz(Toplam-1 Cikarma-2 Bolme-3 Carpma-4)");
	 scanf("%d",&i);
	if(i==1) islem=a+b;
	if(i==2) islem=a-b;
	if(i==3) islem=a/b;
	if(i==4) islem=a*b;
	printf("\nsonuc....%d", islem);
	printf("\n\n Cikis icin a.. Devam icin diger sayýlar.."); scanf("%c",&f);//ASCI Kodlama int'e %c tanımlanır
	f=getch();//ASCII Kodlama için
	if(f==27) exit(0);
	
	goto basla;	                                                                                                       	
}
