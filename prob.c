#include<stdio.h>
int abc(int n){
            for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            return '*';
        }

        for(int j=1; j<=(2*i-2); j++)
        {
            return ' ';
        }

        for(int j=i; j<=n; j++)
        {
            return'*';
        }

        return '\n';
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            return '*';
        }

        for(int j=(2*i-2); j<(2*n-2); j++)
        {
            return' ';
        }

        for(int j=1; j<=i; j++)
        {
            return'*';
        }

        return '\n';
    }
        }

int main()
{   int n;
    int x;
    n=6;
    //scanf("%d",&n);
    x=abc(n);
    printf("%c",x);
    return 0;
}
