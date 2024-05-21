#include<stdio.h>
#include<math.h>
int main(){
    int a,b,T;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&a,&b);
        double areaG,areaT,areaC;
        double pi = 2 * acos(0.0);
        double ab=a*b;
        double apb=a+b;
        double r=ab/apb;
        areaC=pi*pow(r,2);
        areaT=(a+b)*2*r/2;
        areaG=areaT-areaC;
        printf("%lf\n",areaG);
    }
    return 0;
}
