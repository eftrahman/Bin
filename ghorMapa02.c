#include<stdio.h>
int main(){
    int sets;
    float N,M;
    int feet,inch;
    scanf("%d",&sets);
    while(sets--){
        scanf("%f",&N);
        feet=N/1;
        printf("%d\n",feet);
        M=N-feet;

        printf("%f\n",M);
    }

    return 0;
}
