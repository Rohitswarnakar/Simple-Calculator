#include<stdio.h>
#include<string.h>
struct book
{
	char name[40];
	char author[40];
	char publisher[50];
};
int main()
{
	struct book s[2];
	int i;
	printf("enter details of 50 books: \n");
	for(i=0;i<2;i++)
	{
		printf("enter the details of book-%d \n",i+1);
		printf("NAME= ");
		scanf(" %[^\n]", s[i].name); 
		printf("AUTHOR= ");
		scanf(" %[^\n]", s[i].author);
		printf("PUBLISHER= ");
		scanf(" %[^\n]", s[i].publisher);
	}
	printf("NAME OF THE BOOKS BY XYX PUBLISHER ARE: \n");
	for(i=0;i<2;i++)
	{
		 if (strcmp(s[i].publisher,"XYX")==0)
		{
			printf("%s\t",s[i].name);
		}
	}
	return 0;
}
