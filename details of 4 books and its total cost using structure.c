#include<stdio.h>
struct book
{
	char title[30];
	char author[50];
	float price;
};
int main()
{
	struct book b[4];
	int i;
	float cost=0;
	printf("ENTER THE DETAILS OF 4 BOOKS: \n");
	for(i=0;i<4;i++)
	{
		printf("ENTER THE DETAILS OF BOOK-%d: \n",i+1);
		fflush(stdin);
		printf("TITLE= ");
		gets(b[i].title);
		printf("AUTHOR= ");
		gets(b[i].author);
		printf("PRICE= ");
		scanf("%f",&b[i].price);
	}
	for(i=0;i<4;i++)
	{
		cost=cost+b[i].price;
	}
	printf("TOTAL COST OF 4 BOOKS IS:%.2f",cost);
	return 0;
}
