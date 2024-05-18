#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,x,t;
    cout<<"Enter the number of test case : ";
    cin>>t;
    while(t--){
        cout<<"Enter A : ";
        cin>>a;
        cout<<"Enter B : ";
        cin>>b;
        if(a-b!=0){
            x=(a-b)*(a-b);
            x=sqrt(x);
            x=x/(a-b);
            if(x==1){
                cout<<"A is greater"<<endl;
            }
            else{
                cout<<"B is greater"<<endl;
            }
        }
        else{
            cout<<"A and B are equal";
        }
    }
}
