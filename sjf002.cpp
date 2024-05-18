#include<bits/stdc++.h>
using namespace std;
class prcss{
public :
    int pn,bt,wt,tt;
};
void GWTR(prcss ps[],int n){
    int low = 100000;
    int lowp;
    int w=0,t=0,sumw=0,sumt=0;
    double avgw,avgt;
    int gantt[n];
    gantt[0]=0;
    for(int l=0;l<n;l++){
        cout<<"______";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ps[j].bt<low){
                low=ps[j].bt;
                lowp=j;
            }
        }
        cout<<"|_P"<<ps[lowp].pn<<"_|";
        ps[lowp].wt=w;
        w=w+ps[lowp].bt;
        t=t+ps[lowp].bt;
        ps[lowp].tt=t;
        gantt[i+1]=t;
        ps[lowp].bt = 100000;
        low=100000;
    }
    cout<<endl;
    for(int m=0;m<=n;m++){
        cout<<gantt[m]<<"     ";
    }
    cout<<endl<<endl;
    cout<<"Waiting time : "<<endl;
    for(int k=0;k<n;k++){
        cout<<" P"<<k<<" -> "<<ps[k].wt<<endl;
        sumw=sumw+ps[k].wt;
    }
    avgw=sumw/n;
    cout<<"Average Waiting Time : "<<avgw<<endl<<endl;
    cout<<"Turnaround time : "<<endl;
    for(int k=0;k<n;k++){
        cout<<" P"<<k<<" -> "<<ps[k].tt<<endl;
        sumt=sumt+ps[k].tt;
    }
    avgt=sumt/n;
    cout<<"Average Turnaround Time : "<<avgt<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of processes : ";
    cin>>n;
    prcss ps[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Burst time for Process "<<i+1<<" : ";
        cin>>ps[i].bt;
        ps[i].pn=i+1;
    }
    cout<<endl;
    GWTR(ps,n);
    return 0;
}

