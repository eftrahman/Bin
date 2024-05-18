#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int total=0,e;
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        for(int i=0;i<10;i++){
            if(s1[i]=='1'){
                total++;
            }
            if(s2[i]=='1'){
                total++;
            }
            if(s3[i]=='1'){
                total++;
            }
        }
        if(total<=10){
            e=total;
        }
        else if(total>10&&total<=20){
            e=10-(total%10);
        }
        else if(total>20){
            e=total%10;
        }
        if(e==10){
            cout<<"1111111111"<<endl;
        }
        else if(e==9){
            cout<<"1111111110"<<endl;
        }
        else if(e==8){
            cout<<"1111111100"<<endl;
        }
        else if(e==7){
            cout<<"1111111000"<<endl;
        }
        else if(e==6){
            cout<<"1111110000"<<endl;
        }
        else if(e==5){
            cout<<"1111100000"<<endl;
        }
        else if(e==4){
            cout<<"1111000000"<<endl;
        }
        else if(e==3){
            cout<<"1110000000"<<endl;
        }
        else if(e==2){
            cout<<"1100000000"<<endl;
        }
        else if(e==1){
            cout<<"1000000000"<<endl;
        }
        else if(e==0){
            cout<<"0000000000"<<endl;
        }
    }
}
