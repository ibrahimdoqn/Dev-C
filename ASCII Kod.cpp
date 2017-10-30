//ASCII Kodu verilen Tuş İle Programı kapatmak
#include<stdio.h>
#include<conio.h>
#include<iostream>
main()
{
	int a,b,i,islem;
	int f;//İnt Açılır
	basla:
	system("cls");//Ekranı temizler
	printf("1. sayiyi giriniz...:");scanf("%d",&a);
	printf("2.sayiyi giriniz...:");scanf("%d",&b);
	printf("islem giriniz(Toplam-1 Cikarma-2 Bolme-3 Carpma-4)");
	scanf("%d",&i);//Giriş almak için kullanırız. Burada girilen sayı i değerine tanımlanıyor.
		if(i==1) islem=a+b;//i girişi 1 ise int islemi a ve b 'nin toplamına eşitle
		if(i==2) islem=a-b;//i girişi 1 ise int islemi a ve b 'nin farkına eşitle
		if(i==3) islem=a/b;//i girişi 1 ise int islemi a ve b 'nin çarpımına eşitle
		if(i==4) islem=a*b;//i girişi 1 ise int islemi a ve b 'nin bölümüne eşitle
	printf("\nsonuc....%d", islem);//Ekrana Sonuc...: Yazar ve %d değişkenine islem değişkeninin değerini girer.
	bitis:
	printf("\n\n Cikis icin ESC");//Ekrana Çıkış için bu tuşa basın yazar, Fonksiyonu yoktur.
	scanf("%c",&f);//ASCII Kod ile çıkışta Scanf %c ile alınır fakat int'e(int f;) tanımlanır.
		f=getch();//Tanımladığımız İnt'e Getch tanımlayalım
		if(f==27) exit(0);//if ile ASCII Kodu yazıp yapılacak işlemi yazalım. Mesela burada çıkış için exit0 kullanılmış.
		if(f==13)goto basla;//Burada if döngüsü 13 yani enter tuşu bizi basla:'ya götürüyor
		goto bitis;//Eğer Enter yada Esc tuşundan farklı bir tuş kullanılırsa goto bitis bizi goto'ya tekrar götürür,
		//Ve program bizden yeniden Tuş girişi ister
}
