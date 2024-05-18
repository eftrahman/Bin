#include<bits/stdc++.h>
using namespace std;
class Student{
public :
    void show(){
        cout<<"Dept. of CSE, BUBT"<<endl;
    }
};
class StudentA : public Student{
};
class StudentB : public Student{
};
class StudentC : public Student{
};
int main(){
    StudentC myObj1;
    myObj1.show();
    return 0;
}
