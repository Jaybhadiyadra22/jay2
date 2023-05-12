#include<stdio.h>
#include<conio.h>
main()
{
	float base_income,hra,da,ta,gross_income,a=12000;
	
	printf("enter value of base_income\n");
	scanf("%f",&base_income);
	printf("enter value of hra\n");
	scanf("%f",&hra);
	printf("enter value of da\n");
	scanf("%f",&da);
	printf("enter value of ta\n");
	scanf("%f",&ta);
	gross_income=base_income=(base_income*hra/100)+(base_income*da/100)+(base_income*ta/100);;
	printf("gross_income+%f",gross_income);
	getch();
}

