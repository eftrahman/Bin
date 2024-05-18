#include<stdio.h>
int main(){
    int a;
    double b;
    double c;
    scanf("%d%lf",&a, &b);
    if(a<2000){
        if(a%5==0 && a<b){
        c = b-(a+0.50);
        printf("%.2lf\n",c);
        }
        else{
            printf("%.2lf\n",b);
        }
    }
    return 0;
}
