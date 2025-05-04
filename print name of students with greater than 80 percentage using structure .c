#include<stdio.h>
struct student
{
	char name[50];
	int roll_number;
	float percentage;
};
int main()
{
	struct student s[10];
	int i;
	printf("enter the details of 10 students:\n");
	for(i=0;i<10;i++)
	{
		printf("enter the details of STUDENT-%d\n",i+1);
		printf("NAME: ");
		scanf(" %[^\n]", s[i].name);
		printf("ROLL_NUMBER: \n");
		scanf("%d",&s[i].roll_number);
		printf("PERCENTAGE: \n");
		scanf("%f",&s[i].percentage);	
	}
	printf("NAME OF STUDENTS WHO SCORED ABOVE 80 %: \n");
	for(i=0;i<10;i++)
	{
		if(s[i].percentage>=80)
		{
			printf("%s\t",s[i].name);
		}
	}
	return 0;
}
