#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char c;
    int state=0,i=0;
    int a;
    cout<<"enter test case : ";
    cin>>a;
    while(a--){
        cout<<"enter a string : ";
        cin>>s;
        if(s[0]=='x'&&s[1]=='y'){
            i=1;
            state = 4;
            while(s[i]!='\0'){
                c=s[i++];
                if(c=='z'){
                state=4;
                }
            else{
                state=6;
            }
        }
        }
        else{
            i=0;
            while(s[i]!='\0'){
                switch(state){
                case 0:
                    c=s[i++];
                    if(c=='x'){
                        state=1;
                    }
                    else if(c=='y'){
                        state=2;
                    }
                    else state=6;
                    break;
                case 1:
                    c=s[i++];
                    if(c=='x'){
                        state=1;
                    }
                    else if(c=='y'){
                        state=3;
                    }
                    else
                        state=6;
                    break;
                case 2:
                    c=s[i++];
                    if(c=='y'){
                        state=2;
                    }
                    else if(c=='z'){
                        state =5;
                    }
                    else{
                        state=6;
                    }
                case 3:
                    c=s[i++];
                    if(c=='y'){
                        state=3;
                    }
                    else{
                        state=6;
                    }
                case 5:
                    if(s[i++]=='\0'){
                        state=5;
                    }
                    else state=6;
                }
            }
        }
        if(state==2||state==3){
            cout<<"under x*y+"<<endl;
        }
        else if(state==4){
            cout<<"under xyz*"<<endl;
        }
        else if(state==5){
            cout<<"under y+z"<<endl;
        }
        else if(state==6){
            cout<<"not recognized"<<endl;
        }
    }
    return 0;
}
