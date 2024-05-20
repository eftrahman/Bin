#include <stdio.h>
int main() {
    int T,K;
    scanf("%d", &T);
    while(T--){
            scanf("%d",&K);
            while(K--){
                  int a[K],b[K];
                for(int j=0;j<=K;j++){
                    scanf("&d %d",&a[j],&b[j]);
                    }
                    int l,H=0, m,R=0;
                    for(l=0; l<K; l++){
                        H+=a[l];
                    for(m=0; m<K; m++){
                        R+=b[l];
                    }
            }
            if(H>R){
                printf("Harry will marry Granger");
            }
            else if(R>H){
                printf("Ron will marry Granger");
            }
            else if(R==H){
                printf("It is a Draw");
            }
    }
    }

    return 0;
}
