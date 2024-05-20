#include<stdio.h>
int funcbin(int n);
int main()
{
    int n,bin,th;
    printf("Enter Number:");
    scanf("%d",&n);
    if(n<10){
            bin=funcBin(n);
            th = thbit(bin);
            printf("%d",th);

    }
    return 0;
}
int funcBin(int n){
        if (n<2)
           return n;
        return funcBin(n/2)*10+n%2;
    }
int thbit(int n,int m){
            m = (n >> 6) & 1;
            return m;

        }
