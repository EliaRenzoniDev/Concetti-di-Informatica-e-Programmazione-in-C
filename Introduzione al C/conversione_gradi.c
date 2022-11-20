/*

    Programma : Conversione da Gradi Fahrenheit a Gradi Celsius
    Autore : Elia Renzoni
    Contatti : elia.renzoni03@gmail.com


*/

/* Direttive al preprocessore : */
#include <stdio.h>             /* Inclusione della libreria stdio */

/* Definizione della funzione main */
int main(void){

    /* Variabile di input */
    double fahre;
    /* Variabile di output / lavoro */
    double celsius;

    /* Acquisizione dei dati */
    printf("Inserire i gradi Fahrenheit > \n");
    scanf("%lf",
          &fahre);

    /* Calcolo della conversione */
    celsius = (fahre - 32) * 5 / 9;

    /* Comunicazione dei dati all'utente */
    printf("Fahrenheit : %f. Corrispondono a Celsius : %f. ", fahre, celsius);

    return (0);
}