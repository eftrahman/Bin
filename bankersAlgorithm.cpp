#include<bits/stdc++.h>
using namespace std;
int availableA=3,availableB=3,availableC=2;
int nwavailableA=3,nwavailableB=3,nwavailableC=2;
bool allExecuted=false;
int sequence[10];
class AMA{
public :
    bool executed=false;
    int allocationA,allocationB,allocationC;
    int maxA,maxB,maxC;
    int needA,needB,needC;
};
void calneed(AMA ps[],int n){
    for(int i=0;i<n;i++){
        ps[i].needA=ps[i].maxA-ps[i].allocationA;
        ps[i].needB=ps[i].maxB-ps[i].allocationB;
        ps[i].needC=ps[i].maxC-ps[i].allocationC;
    }
    for(int i=0;i<n;i++){
        cout<<"Need of process-"<<i<<" : "<<ps[i].needA<<" "<<ps[i].needB<<" "<<ps[i].needC<<endl;
    }
}
void safeSequence(AMA ps[],int n){
    int flag=0;
    if(allExecuted!=true){
        for(int i=0;i<n;i++){
            if(ps[i].executed!=true&&ps[i].needA<=availableA&&ps[i].needB<=availableB&&ps[i].needC<=availableC){
                ps[i].executed=true;
                availableA=nwavailableA;
                nwavailableA=nwavailableA+ps[i].allocationA;
                availableB=nwavailableB;
                nwavailableB=nwavailableB+ps[i].allocationB;
                availableC=nwavailableC;
                nwavailableC=nwavailableC+ps[i].allocationC;
                cout<<">>"<<i;
            }
        }
        if(availableA==nwavailableA&&availableB==nwavailableB&&availableC==nwavailableC){
            allExecuted=true;
        }
        safeSequence(ps,n);

    }
}
int main(){
    int n=5;
    AMA ps[n];
    ps[0].allocationA=0,ps[0].allocationB=1,ps[0].allocationC=0;
    ps[1].allocationA=2,ps[1].allocationB=0,ps[1].allocationC=0;
    ps[2].allocationA=3,ps[2].allocationB=0,ps[2].allocationC=2;
    ps[3].allocationA=2,ps[3].allocationB=1,ps[3].allocationC=1;
    ps[4].allocationA=0,ps[4].allocationB=0,ps[4].allocationC=2;
    ps[0].maxA=7,ps[0].maxB=5,ps[0].maxC=3;
    ps[1].maxA=3,ps[1].maxB=2,ps[1].maxC=2;
    ps[2].maxA=9,ps[2].maxB=0,ps[2].maxC=2;
    ps[3].maxA=2,ps[3].maxB=2,ps[3].maxC=2;
    ps[4].maxA=4,ps[4].maxB=3,ps[4].maxC=3;
    calneed(ps,n);
    cout<<endl;
    safeSequence(ps,n);
    cout<<endl;
}
