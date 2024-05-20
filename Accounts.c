#include <stdio.h>
struct account {
    int accNo;
    char name[20];
    char type;
    float balance;
};
int main()
{   FILE*in;
    in=fopen("in.txt","r");
    FILE*New;
    New=fopen("Account_info.txt","w");
    struct account N[10];
    float total=0;
    float avg;
    char c;
    int i=0;

    while(fscanf(in,"%d",&N[i].accNo)!=0&&
            fscanf(in,"%s",N[i].name)!=0&&
            fscanf(in,"%c",&N[i].type)!=0&&
            fscanf(in,"%d",&N[i].balance)!=0){
        printf("%d\t%s\t%c\t%f",N[i].accNo,N[i].name,N[i].type,N[i].balance);
        total+=N[i].balance;
        i++;
    }
    avg=total/i;
    printf("\nTotal Balance = %f\nAverage = %f",total,avg);
    int j=0;
    while(j<3){
        fprintf("%d%s%c%f",N[j].accNo,N[j].name,N[j].type,N[j].balance);
    }
}
