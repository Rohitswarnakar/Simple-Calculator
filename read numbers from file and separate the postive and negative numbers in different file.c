#include<stdio.h>
int main()
{
	FILE *fnum,*fpositive,*fnegative;
	int num,N,i;
	fnum=fopen("NUMBER.txt","w+");
	if(fnum==NULL)
	{
		printf("NUMBER.txt OPENING FAILED.");
		return 1;
	}
	printf("ENTER NUMBER OF INTEGERS YOU WANT TO WRITE.\n");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		printf("ENTER INTEGER-%d: \n",i);
		scanf("%d",&num);
		fprintf(fnum,"%d\n",num);
	}
	rewind(fnum);
	fpositive=fopen("POSITIVE.txt","w");
	if(fpositive==NULL)
	{
		printf("POSITIVE.txt OPENING FAILED.");
		return 1;
	}
	fnegative=fopen("NEGATIVE.txt","w");
	if(fnegative==NULL)
	{
		printf("NEGATIVE.txt OPENING FAILED.");
		return 1;
	}
	while(fscanf(fnum,"%d\n",&num)!=EOF)
	{
		if(num>=0)
		{
			fprintf(fpositive,"%d\n",num);
		}
		else
		{
			fprintf(fnegative,"%d\n",num);
		}
	}
	fclose(fnum);
	fclose(fpositive);
	fclose(fnegative);
	return 0;
}
