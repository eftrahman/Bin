#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    int l = s1.length();
    int t;
    cout<<"enter test case : ";
    cin>>t;
    while(t--){
        cout<<"enter a string"<<endl;
        cin>>s1;
        if (s1[0]=='/'&&s1[1]=='/'){
            cout<<"its a comment"<<endl;
        }
        else if (s1[0]=='/'&&s1[1]=='*'&&s1[l-1]=='/'&&s1[l-2]=='*'){
            cout<<"its a comment"<<endl;
        }
        else{
            cout<<"its not a comment"<<endl;
        }
    }
}
