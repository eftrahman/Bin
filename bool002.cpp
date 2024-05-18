#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,sum=0;
    cin>>N;
    int p[N],q[N];
    for(int i=0;i<N;i++){
        cin>>p[i];
    }
    for(int i=0;i<N;i++){
        cin>>q[i];
    }
    for(int i=0;i<N;i++){
        int tempSum=0,pp,qq;
        for(int j=0;j<N;j++){
            pp=(p[i]-p[j]);
            if(pp<0){
                pp=pp*-1;
            }
            qq=(q[i]-q[j]);
            if(qq<0){
                qq=qq*-1;
            }
            tempSum+=min(pp,qq);
        }
        sum+=tempSum;
        pp=0;
        qq=0;
    }
    cout<<sum<<endl;
    return 0;
}

