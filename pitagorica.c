#define MAX 500
#define MAXC 100

#include <stdio.h>

int isPrimitivo(int a, int b, int c);
int MCD(int a, int b);

int main(){
    int j,k;
    int a=1;
    int N,prevN;
    
    printf("Quante terne vuoi calcolare? ");
    scanf("%d",&N);
    prevN = N;
    do{
        for (j = a+1; j<MAX; j++){
            for (k=j+1; (k<MAXC) && (a*a+j*j-k*k>=0); k++){
                if (a*a+j*j == k*k){
                    if (isPrimitivo(a,j,k)==1){
                        printf("a = %d b= %d c= %d\n",a,j,k);
                        N--;
                        break;
                    }
                }
            }
            if (a*a+j*j == k*k)
                break;
        }
        a = a+1;
    }while((N>0) && (a<=MAX));
    
    printf("Numero di terne trovate: %d\n", prevN-N);
    return 0;
}

#include "mia_libreria.h"

int isPrimitivo(int a, int b, int c){
    if ((MCD(a,b)<=1) && (MCD(b,c)<=1) && (MCD(a,c)<=1))
        return 1; //è primitiva
    else
        return 0;
}

int MCD(int a, int b){
    int min, i;
    int MCD = 1;
    
    if ((a==0) || (b==0))
        return 0;
    else
    {
        if (a<b)
            min = a;
        else
            min = b;
        for (MCD = 1, i=1; i<min; i++)
        {
            if ((a%i == 0) && (b%i == 0))
                MCD = i;
        }
        return MCD;
    }
}
