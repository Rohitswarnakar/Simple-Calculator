#include<stdio.h>
int main()
{
	int n;
	printf("ENTER AN INTEGER: ");
	scanf("%d",&n);
 	if (n % 5 == 0) 
	{
        if (n % 11 == 0) 
		{
            printf("%d is divisible by both 5 and 11\n", n);
        } else 
		{
            printf("%d is divisible by 5 but not by 11\n", n);
        }
    } 
	else 
	{
        if (n % 11 == 0) 
		{
            printf("%d is divisible by 11 but not by 5\n", n);
        }
		else 
		{
            printf("%d is neither divisible by 5 nor by 11\n", n);
        }
    }
	return 0;
}
