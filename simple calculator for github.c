#include<stdio.h>
int main()
{
	int num1,num2,ch;//ch for choice input
	do
	{
		printf("\nSELECT THE OPERATION TO PERFORM: \n");
		printf("1.SUM.\n");
		printf("2.DIFFERENCE.\n");
		printf("3.PRODUCT.\n");
		printf("4.DIVISION.\n");
		printf("5.EXIT.\n");
		printf("\nENTER YOUR CHOICE(1-5): ");
		scanf("%d",&ch);
		if(ch==5)
		{
			printf("EXITING........\n");
		}
		else if(ch>=1 && ch<=4)
		{
			printf("\nENTER FIRST NUMBER: ");
			scanf("%d",&num1);
			printf("ENTER SECOND NUMBER: ");
			scanf("%d",&num2);
			if(ch==1)
			{
				printf("\nSUM OF %d AND %d IS %d \n",num1,num2,num1+num2);
			}
			else if(ch==2)
			{
				printf("\nDIFFERENCE OF %d AND %d IS %d \n",num1,num2,num1-num2);	
			}
			else if(ch==3)
			{
				printf("\nPRODUCT OF %d AND %d IS %d \n",num1,num2,num1*num2);
			}
			else if(ch==4)
			{
				if (num2 == 0)// to avoid the infinity case of division
				{
                    printf("\nERROR! Division by zero is not allowed.\n");
                }
                else
                {            
					printf("\nDIVISION OF %d AND %d IS %.3f \n",num1,num2,(float)num1/num2);
				}
			}
		}
		else
		{
			printf("\nINVALID INPUT ! Please Select Between (1 to 5)\n");
		}
	}while(ch!=5);
	return 0;
}

