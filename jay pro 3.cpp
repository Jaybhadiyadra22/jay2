#include<stdio.h>
int main()
{
	float celsius, fahrenheit;
	printf("enter temperature in calsius: ");
	scanf("%f", &celsius);
	//celsius to fahrenheit conversion formula
	fahrenheit = (celsius * 9 / 5)+32;
	printf ("%.2f celsius = %.2f fahrenheit", celsius, fahrenheit);
	
}
