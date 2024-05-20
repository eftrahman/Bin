#include <iostream>
using namespace std;

class CPP {

    int a, b;
public:
    CPP(int x,int y){
        a=x;
        b=y;
        }
    void show()
        {
        cout<<a<<" "<<b;
        }
};

int main()
{
    CPP value(9,11);
    value.show();
    return 0;
}
