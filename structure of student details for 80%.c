#include<stdio.h>
struct student
{
	int roll;
	char name[40];
	float percentage;
};
void printstd(struct student s[2])
{
	int i;
	for(i=0;i<2;i++)
	{
		if(s[i].percentage>=80)
		{
			printf("%s\t",s[i].name);
		}
	} 
}
int main()
{
	struct student s[2];
	int i;
	printf("ENTER THE DETAILS OF 2 STUDENT:\n");
	for(i=0;i<2;i++)
	{
		printf("ENTER THE DETAILS OF STUDENT:%d\n",i+1);       
        printf("Roll number: ");
        scanf("%d", &s[i].roll);      
        printf("Percentage: ");
        scanf("%f", &s[i].percentage);
       	getchar();
		printf("Name: ");
        gets(s[i].name);
	}
	printf("\nStudents with percentage >= 80:\n");
	printstd(s);
	return 0;
}
