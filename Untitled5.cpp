#include<bits/stdc++.h>
using namespace std;
class prcss{
public :
    int p,bt;
};
void GWTR(prcss ps[],int n){
    int low = 100000;
    int lowp;
    int w=0,t=0,sumw=0,sumt=0;
    int wt[n];
    int tt[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ps[j].bt<low){
                low=ps[j].bt;
                lowp=j;
            }
        }
        cout<<">> P "<<ps[lowp].p;
        wt[lowp]=w;
        w=w+ps[lowp].bt;
        t=t+ps[lowp].bt;
        tt[lowp]=t;
        ps[lowp].bt = 100000;
        low=100000;
    }
    cout<<endl;
    cout<<"Waiting time : "<<endl;
    for(int k=0;k<n;k++){
        cout<<" P"<<k<<" -> "<<wt[k]<<endl;
    }
    cout<<"Turnaround time : "<<endl;
    for(int k=0;k<n;k++){
        cout<<" P"<<k<<" -> "<<tt[k]<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    prcss ps[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Burst time for Process "<<i<<" : ";
        cin>>ps[i].bt;
        ps[i].p=i;
        cout<<endl;
    }
    cout<<endl;
    GWTR(ps,n);
    return 0;
}
