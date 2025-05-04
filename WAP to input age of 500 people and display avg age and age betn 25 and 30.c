#include<stdio.h>
int main()
{
	int age[500],i,sum=0;
	float avg;
	printf("ENTER THE AGE OF 500 PEOPLE: \n");
	for(i=0;i<500;i++)
	{
		scanf("%d",&age[i]);
		sum=sum+age[i];
	}
	avg=(float)sum/500;
	printf("AVERAGE AGE IS %f\n",avg);
	printf("AGE BETWEEN 25 AND 30 ARE : \n");
	for(i=0;i<500;i++)
	{
		if(age[i]>=25&&age[i]<=30)
		{
			printf("%d\n",age[i]);
		}
	}
	return 0;
}
