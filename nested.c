/* 1
   1 2 
   1 2 3
   1 2 3 4
   1 2 3 4 5 */

#include<stdio.h>
int main()
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d\t",c);
		}
		 printf("\n");
	}
	return 0;
}
