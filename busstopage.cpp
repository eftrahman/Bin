#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,in,out,sum=0,h=-1;
    cin>>t;
    while(t--){
        cin>>n;
        n=n-1;
        for(int i=0;i<n;i++){
            cin>>in;
            sum+=in;
            cin>>out;
            sum-=out;
            if(sum>h){
                h=sum;
            }
        }
        cout<<h<<endl;
        sum=0;
        h=-1;
    }
    return 0;
}
