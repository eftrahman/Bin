#include<stdio.h>
int main()
{
    int n=6;
    f1(n);
    f2(n);
    return 0;
    }
int f1(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            printf("*");
        }

        for(int j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }

        for(int j=i; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
int f2(int n)
{
         for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }

        for(int j=(2*i-2); j<(2*n-2); j++)
        {
            printf(" ");
        }

        for(int j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
