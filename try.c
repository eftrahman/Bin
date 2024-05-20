#include <stdio.h>
int bin(int n){
        int i;
        for(i=1<<31;i>0;i=i/2)

        }
int 6th(int a, int n, int b)
{

    // Skip N-1 Digits in Base B
    for (int i = 1; i < n; i++)
        a = a / b;

    // Nth Digit from right in Base B
    return a % b;
}
int main()
{
    int a = 100;
    int n = 3;
    int b = 4;
    cout << 6th(a, n, b);
    return 0;
}
