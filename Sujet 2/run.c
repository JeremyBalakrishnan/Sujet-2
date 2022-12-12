#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "run.h"

void run(void){

   if(empty_or_not()){      // Si c'est True, on dit que la File est deja vide.
    
    printf("Rien à nettoyer, l'Ordonnanceur est deja vide.\n");
    return;

   }
    // Si c'est False, on continue.
    
    // tant que l'Ordonnanceur est non vide, on supprime jusqu'à obtenir une file de processus vide.
    while(!empty_or_not()){         
        step();
        pop_ordonnanceur();
    }

}