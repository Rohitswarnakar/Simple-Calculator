#include<stdio.h>

struct Book
{
	int ID;
	char title[25]; // char *title;
	float price;
};

int main()
{
	struct Book b, b1;
	int i;
	
	FILE *fp;
	fp = fopen("book.dat", "wb+");
	
	if(fp==NULL)
	{
		printf("File Opening Not Successfull !!");
		return 1;
	}
	
	for(i=1;i<=3;i++)
	{
		printf("Enter ID, Title, Price of Book-%d:\n",i);
		
		printf("Enter ID:");
		scanf("%d", &b.ID);
		fflush(stdin);	// clear spaces in buffer like \n left by scanf
		
		
		printf("Enter Title:");
		scanf("%[^\n]", b.title); // input characters until newline (\n)
		
		printf("Enter Price:");
		scanf("%f", &b.price);
		
		// Data is ready for writing into file.
		
		fwrite(&b, sizeof(b), 1, fp);	// Write details of book as a block
	}
	
	rewind(fp);	// Take cursor back to beginning
	
	printf("\nTitles of Book with Price less than 1000:\n");
	
	while(fread(&b1, sizeof(b1), 1, fp))	// you can use b in place of b1
	{
		if(b1.price < 1000)
		{
			printf("%s\n",b1.title);
		}
	}
			
	return 0;	
}
