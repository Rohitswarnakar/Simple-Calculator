#include <stdio.h>
#include <string.h>
int main()
{
    char vowels[]="aeiouAEIOU";
    char str[100];
    printf("ENTER A STRING: ");
    scanf("%s",str);
    int i,count=0;    
    for(i=0;str[i]!='\0';i++)
    {
        if(strchr(vowels,str[i]))
        {
        	count++;
        }
    }
    printf("The number of vowels in %s is %d",str,count);
    return 0;
}

