#include<bits/stdc++.h>
using namespace std;
const long long int M = 1000000007;
int main()
{
    int t,n;
    long long int result=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        long long int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            result=result*(a[i]+1);
        }
        result=result-1;
        result= result%M;
        printf("%lld\n",result);
        result=1;
    }
    return 0;
}
