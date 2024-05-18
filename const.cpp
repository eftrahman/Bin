#include<bits/stdc++.h>
using namespace std;
class info{
public:
    string name;
    string id;
    string year;
    int a;
    float b;
    double c;
    static int i;

    void getinfo(string n,string i,string y){
        name=n;
        id=i;
        year=y;
        cout<<"year->"<<year<<endl;
    }
    info(string n,string i,string y){
        name=n;
        id=i;
        year=y;
    }
    info(int year1){
        int timespen=2022-year1;
        cout<<timespen<<endl;
    }

};
void info::functionn(){

}

int main(){
    info obj1(2001);
    obj1.getinfo("abc","123","1999");
    info obj2("abc","123","1999");
    info obj3(1999);
    return 0;
}
