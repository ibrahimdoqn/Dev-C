#include<stdio.h>
#include<conio.h>
#include<iostream>
main()
{
    int a,b;
    for(a=1;a<=10;a++){
        printf("A");
        if(a==10)printf("\n");
    }
    for(a=1;a<=10;a++){
        if(a==5)for(b=1;b<=10;b++){
            printf("A");
            if(b==10)printf("\n");
        }
        else printf("A        A\n");
    }
    getch();
}
