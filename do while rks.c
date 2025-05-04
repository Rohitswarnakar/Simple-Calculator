#include<stdio.h>
int main()
{
    int a,b,ch;
    do{
    printf("\n\nSELECT THE OPERATION TO PERFORM ON 2 INTEGERS:\n");
    printf("1.ADDITION\n");
    printf("2.SUBTRACTION\n");
    printf("3.PRODUCT\n");
    printf("4.EXIT\n");
    printf("ENTER YOUR CHOICE [1-4]:\n");
    scanf("%d",&ch);
    if(ch==4)
    {
        printf("THANK YOU.");
    }
    else if(ch>=1&&ch<=3)
    {
      printf("ENTER THE FIRST INTEGER : \n");
      scanf("%d",&a);
      printf("ENTER THE SECONFD INTEGER : \n");
      scanf("%d",&b);

    if(ch==1)
        {
            printf("SUM OF %d AND %d IS :%d",a,b,a+b);
        }
    else if(ch==2)
         {
             printf("DIFFERENCE OF %d AND %d IS :%d",a,b,a-b);
         }
    else if(ch==3)
         {
             printf("PRODUCT OF %d AND %d IS :%d",a,b,a*b);
         }
    }
    else
    {
        printf("INVALID CHOICE");
    }
    }
    while(ch!=4);
    return 0;
}
