#include<stdio.h>
int main()
{
	float c,f;
	printf("enter the temperature in celsius: ");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("temperature in celsius is %.2f\n",c);
	printf("temperature in fahrenheit is %.2f",f);
	return 0;
}
