#include <stdio.h>

#define MAX 100

int main(){
    int i, a;
    float media = 0;
    
    printf("Inserisci massimo %d numeri interi postivi: ",MAX);
    for (i=0,a=0; i<MAX && a>=0; i++){
        scanf("%d",&a);
        if (a>=0){
            media = (float)(media*i + a)/(i+1);
            printf("Media = %.2f\n",media);
        }
    }
    
    printf("Media totale: %.2f",media);
    return 0;
}
