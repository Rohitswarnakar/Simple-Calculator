#include<stdio.h>
int main()
{
	//for for loop
	printf("FOR LOOP: \n");
	int i;
	for(i=1;i<5;i++)
	{
		printf("%d\n",i);
	}	
	// for while loop
	printf("FOR WHILE LOOP: \n");
	int j=5;
	while(j<=10)
	{
		printf("%d\n",j);
		j++;
	}
	//for do while loop
	printf("FOR DO WHILE LOOP: \n");
	int k=11;
	do
	{
		printf("%d\n",k);
		k++;
	}
	while(k<=20);
	return 0;
}
