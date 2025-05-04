#include<stdio.h>
int main()
{
	int ch,a,b;
	printf("1.FIND SUM.\n");
	printf("2.FIND DIFFERENCE.\n");
	printf("3.FIND PRODUCT.\n");
	printf("4.FIND DIVISION.\n");
	printf("5.FIND MODULUS.\n");
	printf("6.EXIT.\n");
	printf("ENTER YOUR CHOICE [1-6]\n");
	scanf("%d",&ch);
	if(ch==6)
	{
		printf("EXITING!!");
		return 0;
	}
	if(ch>=1&&ch<=5)
	{
		printf("ENTER TWO NUMBERS:\n");
		scanf("%d %d",&a,&b);
	}
	switch (ch)
	{
		case 1:
			printf("SUM OF %d AND %d IS %d.",a,b,a+b);
			break;
		case 2:
			printf("DIFFERENCE OF %d AND %d IS %d",a,b,a-b);
			break;
		case 3:
			printf("PRODUCT OF %d AND %d IS %d",a,b,a*b);
			break;
		case 4:
			printf("DIVISION OF %d AND %d IS %d",a,b,a/b);
			break;
		case 5:
			printf("MODULUS OF %d AND %d IS %d",a,b,a%b);
			break;
		default:
			printf("INVALID INPUT CHOICE!!"); 
			break;
	}
	return 0;
		
}
