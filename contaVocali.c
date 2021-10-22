#include <stdio.h>

//Leggere t caratteri e contare quante sono le vocali.
int main(int argc, const char * argv[]) {
    char car;
    int cont = 0;
    int contaVocali = 0;
    
    printf("Inserisci una lettera: \n");
    
    while(cont<5){
        cont++;
        do{
            scanf(" %c",&car);
            if ((car<'A') || ((car>'Z') && (car<'a')) || (car>'z'))
                printf("Ti avevo chiesto una lettera!!!\n");
        }while((car<'A') || ((car>'Z') && (car<'a')) || (car>'z'));
        
        //Trasformiamo tutto in minuscole
        if (car<'a')
            car = car -'A'+'a';
        
        if ((car=='a') || (car=='e') || (car=='i') || (car=='o') || (car=='u')){
            contaVocali++;
        }
    }
    printf("Le vocali inserite sono: %d\n\n",contaVocali);
    

    return 0;
}
