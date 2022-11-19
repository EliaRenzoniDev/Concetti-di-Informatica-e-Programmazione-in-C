/*

    Programma : Struttura di un semplice programma in C
    Autore : Elia Renzoni 
    Contatti : elia.renzoni03@gmail.com


*/

/* Direttive al preprocessore : */

#include <stdio.h>    /* Inclusione della libreria standard stdio */
#define ADDENDO 23    /* Definizione della costante simbolica o macro costante */

/* Definizione della funzione main */
int main(void){

    /* variabile di input*/
    double num;

    /* variabile di lavoro / output */
    double somma;

    /* Acquisizione del numero */
    printf("Inserisci un numero > \n");
    scanf("%lf",
          &num);

    /* Somma il numero acquisito con la costante ADDENDO */
    somma = num + ADDENDO;

    /* Comunica il risultato all'utente */
    printf("La somma e' >> %f ", somma);

    /* Terminazione della funzione main */
    return (0);
}
