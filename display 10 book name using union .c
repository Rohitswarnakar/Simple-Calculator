#include <stdio.h>
 union Book 
{
    char name[50];
    float price;
};

int main() 
{
    union Book books[10];
    int i;
    // Storing names first
    for(i = 0; i < 10; i++)
	{
        printf("Enter name of book %d: ", i + 1);
        scanf(" %[^\n]", books[i].name);
    }
    printf("\nBook NAMES:\n");
    for (i = 0; i < 10; i++) 
	{
        printf("Book %d: NAME=%s\n", i + 1, books[i].name);
    }

    // Storing prices (overwrites names)
    for(i = 0; i < 10; i++) 
	{
        printf("Enter price of book %d: ", i + 1);
        scanf("%f", &books[i].price);
    }

    // Displaying prices (names are lost)
    printf("\nBook Prices:\n");
    for (i = 0; i < 10; i++) 
	{
        printf("Book %d: Price = %.2f\n", i + 1, books[i].price);
    }

    return 0;
}

