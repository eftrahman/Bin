#include<bits/stdc++.h>
using namespace std;
class Me{

private:
    int phone=123;
public:
    int get_phone(){
        return phone;
    }
    void set_phone(int value){
        phone=value;
    }
};

int main()
{
    Me number;
    //number.set_phone(456);
    cout<<number.get_phone()<<endl;
    return 0;
}

