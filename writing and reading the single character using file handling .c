#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("char.txt","w+");
	if(fp==NULL)
	{
		printf("file opening failed.");
		return 1;
	}
	char ch='A';
	fputc(ch,fp);
	fflush(fp);
	rewind(fp);
	ch=fgetc(fp);
	printf("text read from file: %c",ch);
	fclose(fp);
	return 0;
}
