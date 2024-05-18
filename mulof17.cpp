#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,d;
    cin>>t;
    while(t--){
        cin>>n;
        d=n%10;
        n=n/10;
        if((n-(d*5))%17==0){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}
