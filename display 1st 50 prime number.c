#include <stdio.h>
int main() 
{
    int num = 2, count = 0, i, isPrime;
    printf("First 50 Prime Numbers:\n");
    while (count < 50) 
	{
        isPrime = 1; // Assume the number is prime
        for (i = 2; i < num; i++) 
		{
            if (num % i == 0) 
			{
                isPrime = 0; // Not prime
                break;
            }
        }
        if (isPrime) 
		{
            printf("%d\n", num);
            count++;
        }
        num++;
    }
    return 0;
}

