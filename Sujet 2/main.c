#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structures.h"
#include "step.c"
#include "ajout_activite.c"
#include "run.c"

int main(void){

    // on crée des processus
    Processus p1 /*= {"first", 2, 4}*/;
    Processus p2 /*= {"first", 2, 4}*/;
    Processus p3 /*= {"first", 2, 4}*/;
    Processus p4 /*= {"first", 2, 4}*/;

    printf("Taille de l'Ordonnanceur : %d\n", Ordonnanceur_length());
    step();

    // on ajoute une activité aux processus créés
    ajout_activite(p1,"first",1,5);
    ajout_activite(p2,"second",2,2);
    ajout_activite(p3,"third",3,3);
    ajout_activite(p4,"fourth",4,4);
    printf("Taille de l'Ordonnanceur : %d\n", Ordonnanceur_length());
    run();
    //printf("[ %s , %d , %d ]\n", p1.name, p1.duration, p1.priority);
    //printf("[ %s , %d , %d ]\n", p1.name, p1.duree, p1.priority);
    
    //pop_ordonnanceur();
    printf("Taille de l'Ordonnanceur : %d\n", Ordonnanceur_length());
    step();

    return 0;
}
