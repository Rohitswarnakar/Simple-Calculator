#include<stdio.h>
 int main()
 {
 	int i,count=0,sum=0;
 	for(i=1;count<10;i++)
 	{
 		if(i%2!=0)
 		{
 		printf("%d\n",i);
		sum=sum+i;
 		count++;
 	}
	 }
	 printf("sum of first 10 odd numbers is:%d",sum);
	 return 0;
 }
