#include<stdio.h>
int main()
{
    FILE *Add_Product;
    char name[100];
    Add_Product = fopen("Product_List.txt","a");

    if(Add_Product == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("You're able to see our products.\n");
        printf("Here is our Products :\n");
        gets(name);
        fputs(name,Add_Product);
        fputs("\n",Add_Product);
        printf("Thanks for checking our products.");
        fclose(Add_Product);
    }

    return 0;
}
