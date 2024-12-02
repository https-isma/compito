#include <stdio.h>
#include "funzioni.h"

int main (void){
       int scelta, valore 1, valore 2, risultato;
       printf ("1. Somma\n");
       printf ("2. Differenza\n");
       scanf ("%d\n", &scelta);
       printf ("inserisci il primo valore\n");
       scanf ("%d\n" &valore1);
       printf ("inserisci il secondo valore\n");
       scanf("% d\n", &valore2);
       if (scelta==1){
           risultato=somma (valore1,valore2);
           printf ("%d+ %d\n"valore1,valore2,risultato);
       }else if (scelta==2){
       } else {
       }
       return 0;
