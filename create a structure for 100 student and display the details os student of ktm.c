#include<stdio.h>
#include<string.h>
struct student
{
	int sid;
	char name[30];
	char address[50];
	float cgpa;
};
int main()
{
	struct student s[100];
	int i;
	for(i=0;i<100;i++)
	{
		printf("enter the details of student-%d\n",i+1);
		printf("SID: ");
		scanf("%d",&s[i].sid);
		printf("NAME: ");
		gets(s[i].name);
		printf("ADDRESS: ");
		gets(s[i].address);
		printf("CGPA: ");
		scanf("%f",&s[i].cgpa);
	}
	printf("STUDENTS OF KTM WITH CGPA BETWEEN 3.5 TO 4 ARE :\n");
	for(i=0;i<100;i++)
	{
		if(strcmp(s[i].address,"KTM")==0 && s[i].cgpa>=3.5 && s[i].cgpa<=4.0)
		{
			printf("\n SID: %d",s[i].sid);
			printf("\n NAME: %s",s[i].name);
			printf("\n ADDRESS: %s",s[i].address);
			printf("\n CGPA: %.2f",s[i].cgpa);
		}
	}
	return 0;
}
