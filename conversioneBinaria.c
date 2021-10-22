/* Dato un intero N, calcolare la conversione in numero binario
 1. controllo quanti bit mi servono
 2. controllo se il mio numero > della potenza attuakle, se lo è scrivo 1 (e sottraggo quella ponteza dal numero) altrimenti scrivo 0.
 3. cont-1 pot/2
 4. ripeto dal punto due fino ad arrivare a 0  bit
 */

#include <math.h>

int main() {
    int n,b,bit;
    
    printf("Inserisci il numero da convertire: ");
    scanf("%d",&n);
    while(n<0){
        scanf("%d",&n);
        if (n<0)
            printf("Inserisci un numero intero positivo: ");
    }
    if (n==0){
        printf("0\n");
        return 0;
    }
    bit = log(n)/log(2)+1;
    
    do {
        b = pow(2,bit-1);
        if (n>=b){
            n = n-b;
            printf("1");
        }
        else{
            printf("0");
        }
        bit--;
    }while(bit!=0);
    printf("\n");
    return 0;
}
