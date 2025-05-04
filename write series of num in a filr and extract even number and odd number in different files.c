#include<stdio.h>
int main()
{
	FILE *fnum,*fodd,*feven;
	int num,N,i;
	fnum=fopen("number.txt","w+");
	if(fnum==NULL)
	{
		printf("OPENING NUMBER.TXT UNSUCCESSFUL.");
		return 1;
	}
	printf("ENTER NUMBER OF INTEGERS YOU WANT TO WRITE.");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		printf("ENTER INTEGER-%d: ",i);
		scanf("%d",&num);
		fprintf(fnum,"%d\n",num);//write numbers in file.
	}
	rewind(fnum);
	fodd=fopen("odd.txt","w");
	if(fodd==NULL)
	{
		printf("OPENING ODD.TXT UNSUCCESSFUL.");
		return 1;
	}
	feven=fopen("even.txt","w");
	if(feven==NULL)
	{
		printf("OPENING EVEN.TXT UNSUCCESSFUL.");
		return 1;
	}
	while(fscanf(fnum,"%d\n",&num)!=EOF)
	{
		if(num%2==0)
		{
			fprintf(feven,"%d\n",num);
		}
		else
		{
			fprintf(fodd,"%d\n",num);
		}
	}
	fclose(fnum);
	fclose(fodd);
	fclose(feven);
	return 0;
}
