#include <stdio.h>
int main() 
{
    int count=0,num=2,i,isPrime;
    printf("First 50 prime numbers are:\n");
    while(count<50)
	{
        isPrime=1; // Assume the number is prime
        for(i=2;i<=num/2;i++) 
		{
            if(num%i==0)
			{
                isPrime=0; // Not prime
                break;
            }
        }
        if(isPrime) 
		{
            printf("%d\n",num);
            count++;
        }
        num++;
    }
    return 0;
}

