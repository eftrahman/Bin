#include<bits/stdc++.h>
using namespace std;
class position{
public:
    int lmnt;
    int before;
    int after;
};
int main(){
    int t,n;
    cin>>t;
    while(t--){
        int intrsct=0,e=1;
        cin>>n;
        int arr[n];
        position p[n];
        for(int i=0;i<n;i++){
            cin>>p[i].lmnt;
            p[i].before=i;
        }
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(p[i].lmnt==arr[j]){
                    p[i].after=j;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=e;j<n;j++){
                if((p[i].before-p[j].before<0&&p[i].after-p[j].after>0)||(p[i].before-p[j].before>0&&p[i].after-p[j].after<0)){
                    intrsct++;
                }
            }
            e++;
        }
        cout<<intrsct<<endl;
    }
    return 0;
}
