
//ASCII VALUE WILL BE PRINTED FOR ALL THE LETTERS IN THIS SENTENCE.

#include<stdio.h>
int main()
{
char string[]="I know what you did last vacation";
int m;
for(m=0; string[m]!='\0'; m++)
{
if((m%2 == 0) && string[m]!=' ')
printf("%d", string[m]);
}
return 0;
}
