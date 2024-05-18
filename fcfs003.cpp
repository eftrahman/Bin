#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int bt[n],art0[n],sq[n],art1[n];
    for(int k=0;k<n;k++){
        cout<<"Enter Burst Time for Process-"<<k+1<<" : ";
        cin>>bt[k];
        cout<<"Enter Arrival Time for Process-"<<k+1<<" : ";
        cin>>art0[k];
        art1[k]=art0[k];
    }
    cout<<endl;
    int low=100000,lowOne;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(art0[j]<low){
                low=art0[j];
                lowOne=j;
            }
        }
        art0[lowOne]==100000;
        sq[i]=lowOne;
    }
    for(int l=0;l<n;l++){
        cout<<">> P-"<<sq[l+1];
    }
}
