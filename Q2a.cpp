#include <iostream>
using namespace std;

int main()
{
    try{
        int a,b;
        double c;
        cin>>a>>b;
        if(b==0){
            throw -1;
        }
        c = (double)a/b;
        cout<<c<<endl;
    }
    catch (int n){
        cout<<"Runtime Error"<<endl;
    }


return 0;
}
