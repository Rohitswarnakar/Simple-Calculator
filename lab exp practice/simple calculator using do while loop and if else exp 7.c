#include<stdio.h>
int main()
{
	int a,b,ch;
	do
	{
		printf("\nSELECT THE OPERATION : \n");
		printf("1.ADDITION.\n");
		printf("2.SUBTRACTION.\n");
		printf("3.PRODUCT.\n");
		printf("4.EXIT.\n");
		printf("ENTER YOUR CHOICE (1-4): ");
		scanf("%d",&ch);
		if(ch==4)
		{
			printf("\nEXITING!! THANK YOU");
		}
		else if(ch>=1&&ch<=3)
		{
			printf("ENTER TWO NUMBERS : ");
			scanf("%d %d",&a,&b);
			if(ch==1)
			printf("SUM OF %d AND %d IS %d.\n",a,b,a+b);
			if(ch==2)
			printf("DIFFERENCE OF %d AND %d IS %d.\n",a,b,a-b);
			if(ch==3)
			printf("PRODUCT OF %d AND %d IS %d.\n",a,b,a*b);
		}
		else
		{
			printf("\nINVALID CHOICE !!\n");
		}
	}while(ch!=4);
	return 0;
}

