#include<bits/stdc++.h>
using namespace std;

class sum{
public:
    void print(int a){
    cout<<"Int-->"<<a<<endl;
    }

    void print(double a){
    cout<<"Double-->"<<a<<endl;
    }

    void print(char a, char b){
    cout<<"Char-->"<<a<<endl;
    }

    void print(int a, double b){
    cout<<"Sum-->"<<a+b<<endl;
    }

    void print(int a, int b){
    cout<<"Sum-->"<<a+b<<endl;
    }

    void print(){
    cout<<"No data"<<endl;
    }
};

int main()
{
    sum prnt;
    prnt.print(6,5.6);
    return 0;
}
