#include<bits/stdc++.h>
using namespace std;
void ganttChart(int BT[],int a){

    int s=0;
    for(int k=0;k<a;k++){
        cout<<" _____";
    }
    cout<<endl;
    for(int j=0;j<a;j++){
    cout<<"|_P"<<j+1<<"_|";
    }
    cout<<endl;
    cout<<"  0   ";
    for(int i=0;i<a;i++){
        s=s+BT[i];
        cout<<s<<"   ";
    }
}
void waitingT(int BT[],int a){
    int wt[a];
    int s=0;
    float sum=0;
    for(int i=0;i<a;i++){
        wt[i]=s;
        s=s+BT[i];
        cout<<"Waiting Time of process-"<<i+1<<" : "<<wt[i]<<endl;
        sum=sum+wt[i];
    }
    cout<<"Average Waiting time : "<<sum/a;
}
void TurnaroundT(int BT[],int n){
    int tt[n];
    int s=0;
    float sum=0;
    for(int i=0;i<n;i++){
        s=s+BT[i];
        tt[i]=s;
        cout<<"Turnaround Time of process-"<<i+1<<" : "<<tt[i]<<endl;
            sum=sum+tt[i];
    }

    cout<<"Average Turnaround time : "<<sum/n;
}
void responseT(int BT[],int n){
    int wt[n];
    int s=0;
    float sum=0;
    for(int i=0;i<n;i++){
        wt[i]=s;
        s=s+BT[i];
        cout<<"Response Time of process-"<<i+1<<" : "<<wt[i]<<endl;
        sum=sum+wt[i];
    }
    cout<<"Average Response time : "<<sum/n;
}
int main(){
    int n;
    cout<<"Enter the amount of processes : ";
    cin>>n;
    int pn[n];
    int BT[n];
    for(int i=0;i<n;i++){
        pn[i]=i+1;
        cout<<"Burst Time of process-"<<pn[i]<<" : ";
        cin>>BT[i];
    }
    cout<<endl;
    cout<<"Gantt Chart : "<<endl;
    ganttChart(BT,n);
    cout<<endl;
    cout<<endl;
    cout<<"Waiting Time : "<<endl;
    waitingT(BT,n);
    cout<<endl;
    cout<<endl;
    cout<<"Turnaround Time : "<<endl;
    TurnaroundT(BT,n);
    cout<<endl;
    cout<<endl;
    cout<<"Response Time : "<<endl;
    responseT(BT,n);
}


