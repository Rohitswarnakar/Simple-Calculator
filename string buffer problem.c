#include<stdio.h>
#include<string.h>

int main()
{
	char str[25];
	fgets(str,sizeof(str),stdin); // Input: hello
	//scanf("%[^\n]",str);
	printf("Input String is: %s", str); // prints: hello\n
	
	if(strcmp("hello",str)==0) // strcmp("hello","hello\n") == 0) is FALSE

	printf("This is NEXT to string print.");
	return 0;
	
}
