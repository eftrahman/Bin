#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    if(n%10==1){
        n=n+5;
    }
    if(n%100>=10&&n%100<20){
        n=n+50;
    }
    if(n%1000>=100&&n%1000<200){
        n=n+500;
    }
    if(n%10==2){
        n=n+6;
    }
    if(n%100>=20&&n%100<30){
        n=n+60;
    }
    if(n%1000>=200&&n%1000<300){
        n=n+600;
    }
    if(n%10==5){
        n=n+4;
    }
    if(n%100>=50&&n%100<60){
        n=n+40;
    }
    if(n%1000>=500&&n%1000<600){
        n=n+400;
    }
    cout<<"New Value of N : "<<n<<endl;
    return 0;
}
