/*

    Programma : Struttura di un semplice programma in C, con qualificatore static 
    Autore : Elia Renzoni
    Contatti : elia.renzoni03@gmail.com

*/

#include <stdio.h>

int main(void){

    static int addendo = 23;
    double num;
    double somma;

    printf("Inserisci un numero > \n");
    scanf("%lf", 
          &num);

    somma = num + addendo;

    printf("La somma e' > %f ", somma);

    return (0);
}
