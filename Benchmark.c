//
//  main.c
//  Bench
//
//  Created by wantto on 13.11.2017.
//  Copyright © 2017 wantto. All rights reserved.
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    int a,q,d,asal;
    float b[100];
    float c[100];
    float s[76];
    time_t start,end;
    system("clear");
    printf("Welcome Wantto Benchmark\n========================\nBy Wantto");
    printf("\n\n Devam etmek için bir tuşa basınız...");
           getchar();
    time (&start);
    for(q=0;q<=100;q++){
        system("clear");
        printf("\nFloating Benchmark\nBy Wantto DOGAN\n====================\n İşlem Devam Ediyor");
        printf("\n         %d",q);
        printf("\n====================\n\n");
        for(d=2;d<=10000000;d++){
            b[0]=0;c[0]=1;
            if (q%d==0);for(a=0;a<=75;a++){
                b[a+1]=c[a]+b[a];
                c[a+1]=b[a+1]+c[a];
                s[a]=c[a]*q;
                s[a-1]=s[q]+b[a];
                s[a-1]=s[a-1]/c[q];
                if(asal%d==0)d++;
                else d--;
            }
            d--;
        }
}
    time(&end);
    printf("\n=================\nSkorunuz...:");
    printf("%.0f\n=================",difftime(end,start));
    printf("\n\nÇıkmak için bir tuşa basınız...");
    getchar();
}
