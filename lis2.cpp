#include<bits/stdc++.h>
using namespace std;
int lis(int arr[], int n)
{
    int *lis, i, j, max=0;
    lis=(int*) malloc(sizeof(int) *n);
    for(i=0; i<n; i++)
        lis[i]=1;
// 10, 22, 9, 33,21, 50, 41, 60, 80
    for(i=0; i<n; i++)
        for(j=0; j<i; j++)
            if(arr[i]>arr[j] && lis[i]<lis[j]+1)
                lis[i]=lis[j]+1;
              //10 10
              // arr[1] arr[0]
              //22 > 10  1<2


    for(i=0; i<n; i++)
      if(max<lis[i])
            max=lis[i];

    free(lis);
    return max;
}
int main()
{
    int N;
    cin>>N;
    int arr [100];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
   // int n=sizeof(arr)/sizeof(arr[0]);

    printf("The length of Longest Increasing Subsequence is %d\n",lis(arr,N));

    return 0;
}
