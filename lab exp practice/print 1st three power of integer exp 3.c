#include<stdio.h>
#include<math.h>
int main()
{
	int n,n1,n2,n3;
	printf("enter an integer:\n");
	scanf("%d",&n);
	n1=(int)pow(n,1);
	n2=(int)pow(n,2);
	n3=(int)pow(n,3);
	printf("%d^1=%d\n",n,n1);
	printf("%d^2=%d\n",n,n2);
	printf("%d^3=%d\n",n,n3);
	return 0;
}
