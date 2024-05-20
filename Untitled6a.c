#include<stdio.h>

typedef struct account
{
    int accNo;
    char name[20];
    char type;
    float balance;
}stacc;

int main ()
{
    stacc acc[20];
    FILE *in;
    FILE *nf;
    int i;
    float total=0,av;
    in=fopen("in.txt","r");
    for(i =0 ; i < 3; i++)
    {
        fscanf(in,"%d %s %c %f", &acc[i].accNo, acc[i].name,&acc[i].type,&acc[i].balance);
    }
    for ( i = 0; i < 3; i++)
    {
        printf("%d %s %c %.1f\n", acc[i].accNo, acc[i].name,acc[i].type,acc[i].balance);
        total=total+acc[i].balance;
    }
    printf("Total = %.1f\n",total);
    printf("Avarage = %.2f\n",total/i);

    nf=fopen("Account_info.txt","w");
    for ( i = 0; i < 3; i++)
    {
        acc[i].balance*=1.1;
    }
    for ( i = 0; i < 3; i++)
    {
      fprintf(nf,"%d %s %c %f\n", acc[i].accNo, acc[i].name,acc[i].type,acc[i].balance);
    }

    return 0;
}
