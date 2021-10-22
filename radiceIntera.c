//Calcolare la radice quadrata intera di un numero.
int main(int argc, const char * argv[]) {
    int n=1,M;
    int flag = 0;
    
    printf("Inserisci il numero >1 per calcolarne la radice quadrata intera: ");
    scanf("%d", &M);
    for (; ((n*n<=M) && (flag==0)); n++){
        if (n>=5)
            flag = 1;
    }
    n--;
    printf("La radice intera di %d vale %d\n",M,n);
    
}
