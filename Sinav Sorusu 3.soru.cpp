#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
main()
{
    char ad[10];int a=0,uz;
    printf("Adinizi giriniz...:");scanf("%s",&ad);
    uz=strlen(ad);
    printf("\nUzunluk...:%d",uz+1);
    basla:
    printf("\n%d - %c - %c",a+1,ad[a],ad[uz-a-1]);
    a++;
    if(uz==a){
        printf("\n Cikis icin bir tusa basin...");
        getch();
        exit(0);
    }
    else goto basla;
}
