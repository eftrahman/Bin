#include<stdio.h>
#include<math.h>
int main(){
    int T,D,K;
    double pi=3.14159,r1,r2,area1,area2,area;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&D,&K);
        r1=(2*pi*D)/((2*pi*K)-(2*pi));
        r2=r1-D;
        area1=pi*r1*r1;
        area2=pi*r2*r2;
        area=area1-area2;
        printf("%lf",&area);
    }
    return 0;

}
