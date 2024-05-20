#include<bits/stdc++.h>
using namespace std;
template <class aTmplt>
aTmplt MaxValue(aTmplt a,aTmplt b,aTmplt c){
    if(a>=b && a>=c) {
        return a;
    }
    else if(b>=a && b>=c) {
            return b;
    }
    else
    return c;
}
int main()
{
    int a;
    cout<<"1 for integer"<<endl;
    cout<<"2 for float"<<endl;
    cout<<"3 for charecter"<<endl;
    cin>>a;
    system("cls");
    if(a==1){
        int x,y,z,maxv;
        scanf("%d%d%d",&x,&y,&z);
        printf("Greatest Value =");
        maxv=MaxValue(x,y,z);
        printf("%d\n",maxv);
    }
    else if(a==2){
        float x,y,z,maxv;
        scanf("%f%f%f",&x,&y,&z);
        printf("Greatest Value =");
        maxv=MaxValue(x,y,z);
        printf("%f\n",maxv);
    }
    else if(a==3){
        char x,y,z,maxv;
        scanf(" %c %c %c",&x,&y,&z);
        printf("Greatest Value =");
        maxv=MaxValue(x,y,z);
        printf("%c\n",maxv);
    }

    return 0;
}



