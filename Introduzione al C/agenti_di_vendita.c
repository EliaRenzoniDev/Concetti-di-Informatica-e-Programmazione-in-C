/*

    Programma : Rimborso agenti di vendita
    Autore : Elia Renzoni
    Contatti : elia.renzoni03@gmail.com

*/

/* Direttive al preprocessore : */

#include <stdio.h>             /* Inclusione della libreria stdio */
#define MOLTIPLICA 0.35        /* Definizione della costante simbolica, da usare nel calcolo del rimborso */

/* Definizione della funzione main */
int main(void){

    /* Variabile di ingresso */
    double chilometri;
    /* Variabile di lavoro / output */
    double rimborso;

    /* Acqusizione dei dati */
    printf("Inserire il numero dei chilometri > \n");
    scanf("%lf",
          &chilometri);

    /* Calcolo del rimborso */
    rimborso = chilometri * MOLTIPLICA;

    /* Comunicazione dei dati all'utente */
    printf("Rimborso > %f euro ", rimborso);

    return (0);
}
