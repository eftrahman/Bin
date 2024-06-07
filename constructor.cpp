#include<bits/stdc++.h>
using namespace std;

class sum{
public:
    sum(int a, int b){
        cout<<a+b<<endl;
    }
    sum(){
        cout<<"Default"<<endl;
    }
};

int main()
{
    sum(5,6);
    sum(7,8);
    sum();
    return 0;
}
