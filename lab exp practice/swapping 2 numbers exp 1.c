#include<stdio.h>
int main()
{
	int A,B,temp;
	printf("enter 1st number A= ");
	scanf("%d",&A);
	printf("enter 2nd number B= ");
	scanf("%d",&B);
	printf("NUMBERS BEFORE SWAPPING: \nA=%d\nB=%d\n",A,B);
	temp=A;
	A=B;
	B=temp;
	printf("NUMBERS AFTER SWAPPING: \nA=%d\nB=%d",A,B);
	return 0;
}
