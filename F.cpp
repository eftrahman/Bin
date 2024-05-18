#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0){
            continue;
        }
        else if(a[i]==a[i-1]){
                i--;
                n--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<"-->"<<a[i]<<endl;
    }
    int cmbn=0;
    for(int i=0;i<n;i++){
        int nc=1;
        if(a[i]>0){
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                else if(i<0){
                    continue;
                }
                else if(a[i]==a[j]){
                    a[j]=-420;
                    nc++;

                }
            }
            cout<<"##-> "<<a[i]<<endl;
            a[i]=-69;
        }

        cout<<"n count--> "<<nc<<endl;
        int p=0;
        int nf=1,nm2f=1;
        if(nc>1){
            int nm2=nc-2;
            for(nc;nc>0;nc--){
                nf*=nc;
            }
            cout<<"n fact--> "<<nf<<endl;
            if(nm2==0){
                nm2f=1;
            }
            else{
                for(nm2;nm2>0;nm2--){
                    nm2f*=nm2;
                }
            }
            cout<<"n-2 fact-->"<<nm2f<<endl;
            p=nf/(2*nm2f);
            cout<<"n's combination--> "<<p<<endl;
        }
        cmbn+=p;
    }
    cout<<cmbn+1<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
}
