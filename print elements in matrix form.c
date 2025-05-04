#include<stdio.h>
int main()
{
	int mat[3][2]={4,3,2,5,6,7},r,c;
	for(r=0;r<3;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%d\t",mat[r][c]);
		}
		printf("\n");
	}
	return 0;
}
