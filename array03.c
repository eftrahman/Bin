#include<stdio.h>
int main()
{   int i,j;
    int marks[10];
    for(i=0;i<10;i++){
        scanf("%d",&marks[i]);
    }
    for(i=0;i<10;i++){
        printf("%d",marks[i]);
    }
    int max = -1;
    int min = 100;


    return 0;
}
