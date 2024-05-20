#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
void chek(string x,string y){
    int a=x.size();
    int b=y.size();
    if(a==b&&x[a-2]==y[b-2])
        cout<<"True"<<endl;
    else
        cout<<"false"<<endl;
    }
int main()
{
    string N1,N2;
    cin>>N1>>N2;
    chek(N1,N2);
    getch();
}
