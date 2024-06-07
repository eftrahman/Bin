#include<bits/stdc++.h>
using namespace std;
class Me{

private:
    string name="OOP";
    int phone=123;
    char c='s';
friend class MyFriend;
friend class check;
};

class MyFriend{
public:
    void show(Me a){
        cout<<a.name<<endl<<a.phone<<endl<<a.c<<endl;
    }
};

class check{
public:
    void show(Me a){
        cout<<a.name<<endl<<a.phone<<endl;
    }
};
int main()
{
    Me me_obj;
    MyFriend mf_obj;
    check chk;
    mf_obj.show(me_obj);
    chk.show(me_obj);
    return 0;
}
