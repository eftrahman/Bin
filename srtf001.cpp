#include<bits/stdc++.h>
using namespace std;
class prcss{
public :
    int p,bt,art;

};
//void ganttchart(prcss ps,int n){
//    bool arrived = false;
//    int
//}
int main(){
    int n;
    cin>>n;
    prcss ps[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Arrival time for Process "<<i<<" : ";
        cin>>ps[i].art;
        cout<<"Enter Burst time for Process "<<i<<" : ";
        cin>>ps[i].bt;
        ps[i].p=i;
        cout<<endl;
    }
    cout<<endl;
    cout<<ps[2].bt;
    //ganttchart(ps,n);
    return 0;
}
