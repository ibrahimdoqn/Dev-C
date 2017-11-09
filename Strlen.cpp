#include<stdio.h>
#include<iostream>
#include<string.h>
main()
{
	char ad[20]; int a,b;
	printf("İsim...:");scanf("%s",&ad);
	b=strlen(ad);
	for(a=0;a<=b;a++){
		printf("\n%c",ad[a]);
	}
}
