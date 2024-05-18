#include<bits/stdc++.h>
using namespace std;
class wave{
public:
    int time,fun,wait;
};
using namespace std;
void surfseq(wave w1[],int n){
    wave w[n];
    for(int i=0;i<n;i++){
        w[i].time=w1[i].time;
        w[i].fun=w1[i].fun;
        w[i].fun=w1[i].fun;
    }
    int seq[n];
    int low=2000000;
    int lowone;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(w1[j].time<low){
                low=w1[j].time;
                lowone=j;
            }
        }
        seq[i]=lowone;
        w1[lowone].time=2000001;
        low=2000000;
    }
    int high=w[seq[n-1]].time;
    int ct=w[seq[0]].time;
    int highestfun=-1;

}
int main(){
    int n;
    cin>>n;
    wave w1[n];
    wave w[n];
    for(int i=0;i<n;i++){
        cin>>w[i].time>>w[i].fun>>w[i].wait;
        w1[i].time=w[i].time;
        w1[i].fun=w[i].fun;
        w1[i].wait=w[i].wait;
    }
    surfseq(w,n);
    return 0;
}

