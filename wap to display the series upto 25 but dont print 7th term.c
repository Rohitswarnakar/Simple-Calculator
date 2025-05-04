#include <stdio.h>
int main() 
{
    int i,a=2,b=3;
    for(i=1;i<=25;i++) 
	{
		if(i==7) 
		{
           // Skip the 7th term
            a++;
            b=b+2;
            continue;        
		}
		printf("%d*%d=%d\n",a,b,a*b);
        a++;
        b=b+2;
	}
	return 0;
}

