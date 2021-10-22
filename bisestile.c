//se divisibile per 400 o divisibile 4 ma non per 100
int main(int argc, const char * argv[]) {
    int anno = 2021;
    
    for (; anno<2100; anno++)
    {
        if (anno%2!=0)
            continue;
        if ((anno%400==0) || ((anno%4==0) && (anno%100!=0))){
            printf("%d è bisestile\n",anno);
        }
    }
}

