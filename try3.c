#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    //sum of the last 2 digits of my id is (6+0=6).
    if (num<10){
            int n=6, bit;
        bit = (num >> n) & 1;

        printf("The %dth bit is %d", n, bit);
    }
    else if(num>9&&num<100){
        int n=6, bit;
        bit = (num >> n) & 1;
        int flp;
        flp = flip(bit);
        printf("The fliped nth bit is %d",flp);

    }

    return 0;
}
int flip(int n)
        {
        return n^(1<<n);
        }
