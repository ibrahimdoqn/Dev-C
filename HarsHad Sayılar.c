//
//  main.c
//  HarsHad Sayı Bulma Programı
//
//  Created by wantto on 20.11.2017.
//  Copyright © 2017 wantto. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c,d,e,f,q,toplam,tektop,n,list[100000],list2[100000];
    system("clear");
    n=0;
    say://Sayma Algoritması
    {
    f++;
    if(f==10){f=0;e++;}
    if(e==10){e=0;d++;}
    if(d==10){d=0;c++;}
    if(c==10){c=0;b++;}
    if(b==10){b=0;a++;}
    }
    {
    toplam=f*1+e*10+d*100+c*1000+b*10000+a*100000;
    tektop=a+b+c+d+e+f;
    printf("\nSayı...:%d\nSayılar Toplamı...:%d\nHarshad Sayı Mı?...:",toplam,tektop);
        if(toplam%tektop==0){
            list[n]=toplam;
            list2[n]=tektop;
            n++;
            printf("Evet\n");}
    else printf("Hayır\n");
    }
    if(toplam==999999){
        printf("\n\n%d Tane Harshad sayı bulundu.\nBu sayıları listelemek için bir tuşa basın.",n);
        getchar();
        system("clear");
        for(q=0;q<=n-1;q++){
            printf("\nSayi...:%d  Toplamı...:%d\n",list[q],list2[q]);
        }
        getchar();
        exit(0);
    }
    else goto say;
}
