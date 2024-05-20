#include<bits/stdc++.h>
using namespace std;

class A{
public:
    int a=1;
    int b=2;
    void sum(int x , int y){
        a=x;
        b=y;
        int Sum = x+y;
        cout<<"Sum ="<<Sum<<endl;
    }
};

class B:public A{
public:
};

class C : public A{
public:
};

class D : public B, public C{
public:
};

int main()
{
    D obj;
    obj.sum();
    return 0;
}
