#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    int t;
    cout<<"Number of test case : ";
    cin>>t;
    while(t--){
        cout<<"enter a identifier : ";
        cin>>s1;
        if(s1[0]>=97&&s1[0]<=122||s1[0]>=65&&s1[0]<=90||s1[0]==95){
            cout<<">-------------<valid identifier>-------------<"<<endl;
        }
        else{
            cout<<">============<invalid identifier>============<"<<endl;
        }
    }
    return 0;
}
