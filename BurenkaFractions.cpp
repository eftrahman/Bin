#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,t;
    int m1,m2,bg,s,z=0;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        m1=a*d;
        m2=b*c;
        if(a==0){
            z=z+1;
        }
        if(b==0){
            z=z+1;
        }
        if(c==0){
            z=z+1;
        }
        if(d==0){
            z=z+1;
        }

        if(z>0){
            if(z==4){
                continue;
            }
            else if(z==2&&a==0&&c==0||b==0&&d==0){
                    cout<<0<<endl;
            }
            else if(z==1&&b==0){
                if(c==d){
                    cout<<1<<endl;
                }
                else if(c%d==0||d%c==0){
                    cout<<2<<endl;
                }

                else{
                    cout<<3<<endl;
                }
            }
            else if(z==1&&d==0){
                if(a==b){
                    cout<<1<<endl;
                }
                else if(a%b==0||b%a==0){
                    cout<<2<<endl;
                }

                else{
                    cout<<3<<endl;
                }
            }
            else if(z==1&&a==0||c==0){
                cout<<1<<endl;
            }
            else if(z==2){
                if(a==0&&b==0||c==0&&d==0){
                    continue;
                }
            }

        }
        else{
            if(m1==m2){
                cout<<0<<endl;
            }
            else if(m1!=m2){
                if(m1>m2){
                    bg=m1;
                    s=m2;
                }
                else{
                    bg=m2;
                    s=m1;
                }
                if(bg%s==0){
                    cout<<1<<endl;
                }
                else{
                    cout<<2<<endl;
                }
            }
        }
    }
    return 0;
}

