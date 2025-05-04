#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("text.txt","w+");
	if(fp==NULL)
	{
		printf("text.txt opening failed.");
		return 1;
	}
	int a=5,X;
	float b=3.14,Y;
	fprintf(fp,"%d %f\n",a,b);
	rewind(fp);
	fscanf((fp),"%d %f\n",&X,&Y);
	printf("INTEGERS= %d\t FLOAT= %f",X,Y);
	fclose(fp);
	return 0;
}
