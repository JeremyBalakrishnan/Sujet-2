#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "step.h"

Bool empty_or_not(void){            // True = empty.

    if(tete == NULL && queue == NULL){
        return true;
    }
    return false;
}


int Ordonnanceur_length(void){

    return nb_elements;
}

Processus tete_ordonnanceur(void){
    
    if(empty_or_not())
        exit(1);
    
    return tete -> process;
}

Processus queue_ordonnanceur(void){
    
    if(empty_or_not())
        exit(1);
    
    return queue -> process;
}

void step(void){

    if(empty_or_not()){

        printf("Rien à faire, l'Ordonnanceur est vide.\n");
        return;
    }

    Ordonnanceur *temp = tete;
    Processus *temp2 = nom;
    Processus *temp3 = duree;
    Processus *temp4 = priorite;

    while(temp != NULL){
        //printf("[%d] ", temp -> process);
        printf("[ %s , %d , %d ], on attend %d secondes.\n", temp->process.name, temp->process.duration, temp->process.priority, temp->process.duration);
        //printf("[ %s , %d , %d ], on attend %d secondes.\n", temp2->name, temp3->duration, temp4->priority, temp3->duration);
        temp = temp -> next;
    }
    printf("\n");
}
