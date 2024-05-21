#include<bits/stdc++.h>
using namespace std;

void combination(int *candyAmnt,int N){
    int i,j;
    int comset=pow(2,N);
    for(i=0;i<comset;i++){
        for(j=0;j<N;j++){
            if(i & (1<<j)){
                cout<<candyAmnt[j];
            }
        }
        cout<<endl;
    }
}

int main()
{
    int N;
    cin>>N;
    int candyAmnt[N];
    for(int i=0;i<N;i++){
        cin>>candyAmnt[i];
    }
    combination(candyAmnt,N);
    return 0;
}
