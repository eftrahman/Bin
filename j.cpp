#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(t--){
        string A,B;
        cin>>A>>B;
        bool st=false;
        int lenA=A.size();
        int lenB=B.size();
        for(int i=0;i<lenA;i++){
            for(int j=0;i<lenB;j++){
                if(A[i]==B[j]){
                    st=true;
                    break;
                }
            }
            if(st){
                break;
            }
        }
        if(st){
            cout<<"Yes"<<endl;
        }
    }
}
