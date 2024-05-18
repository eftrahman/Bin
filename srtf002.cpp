#include<bits/stdc++.h>
using namespace std;
class prcss{
public :
    int pn,p,art,bt,wt,tt,art1;
};
void GWTR(prcss ps[], int n){
    int low=100000;
    int lowp;
    int gantt[n];
    gantt[0]=0;
    int w=0,t=0,sumw=0,sumt=0;
    for(int l=0;l<n;l++){
        cout<<"______";
    }
    int ct=0;
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ps[j].p<low){
                low=ps[j].p;
                lowp=j;
            }
        }
        cout<<"|_P"<<ps[lowp].pn<<"_|";
        ps[lowp].wt=w-ps[lowp].art;;
        w=w+ps[lowp].bt;
        //w=w-ps[lowp].art;
        t=t+ps[lowp].bt;
        ps[lowp].tt=t-ps[lowp].art;
        //ct=ct+ps[lowp].bt;
        gantt[i+1]=t;
        //ps[lowp].art1=ps[lowp].art;
        ps[lowp].p =ps[lowp].p+100000;
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
    float avgw=(float)sumw/n;
    cout<<"Average Waiting Time : "<<avgw<<endl<<endl;
    cout<<"Turnaround time : "<<endl;
    for(int k=0;k<n;k++){
        cout<<" P"<<k<<" -> "<<ps[k].tt<<endl;
        sumt=sumt+ps[k].tt;
    }
    float avgt=(float)sumt/n;
    //printf("Average Turnaround Time : %.2f\n",avgt);
    cout<<"Average Turnaround Time : "<<avgt<<endl;
}
int main(){
    int n;
    cout<<"Number of processes : ";
    cin>>n;
    prcss ps[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Arrival time for Process "<<i+1<<" : ";
        cin>>ps[i].art;
        cout<<"Enter Burst time for Process "<<i+1<<" : ";
        cin>>ps[i].bt;
        cout<<"Enter Priority of Process "<<i+1<<" : ";
        cin>>ps[i].p;
        ps[i].pn=i+1;
    }
    cout<<endl;
    GWTR(ps,n);
    return 0;
}

