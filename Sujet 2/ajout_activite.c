#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "ajout_activite.h"

void ajout_activite(Processus x, char* name, int duree, int priority){

    Ordonnanceur *element;

    element = malloc(sizeof(*element));

    if(element == NULL)
    {
        fprintf(stderr, "Erreur : problème allocation dynamique.\n");
        exit(EXIT_FAILURE);
    }
    
    if ((priority > 5) || (priority < 0))
    {
        printf("Erreur pour la valeur de la priorité du processus.\n");
        exit(EXIT_FAILURE);
    }

    if(empty_or_not()){
        tete = element;
        queue = element;
    }
    else{
        queue -> next = element;
        queue = element;
    }

    nb_elements++;
}

void pop_ordonnanceur(void){

    if(empty_or_not()){

        printf("Rien a retirer, la File est deja vide.\n");
        return;
    }

    Ordonnanceur *temp = tete;


    if(tete == queue){          // une seule procedure dans la file

        tete = NULL;
        queue = NULL;
    }
    else {
        tete = tete -> next;
    }

    free(temp);
    nb_elements--;
}