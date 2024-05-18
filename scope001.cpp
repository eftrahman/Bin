#include<bits/stdc++.h>
using namespace std;

int a=99;
class aclass{
public :
    int a=55;
    void func();
    void disp(){
        printf("global = %d\n",::a);
        printf("local  = %d\n",a);
    }
};
void aclass::func(){
    printf("a fucntion\n");
}
int main(){
    aclass obj1;
    obj1.disp();
    obj1.func();
}
