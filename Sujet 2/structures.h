#ifndef __ORDONNANCEUR__
#define __ORDONNANCEUR__


/* Type Booléen qui servira pour la file */
typedef enum{
    false,
    true
}Bool;



/* Structure d'un Processus */
typedef struct Processus
{
    char name[256];
    int duration;
    int priority;
}Processus;



/* Structure d'un Ordonnanceur se traduisant comme étant une file de processus*/
typedef struct Ordonnanceur 
{
    Processus process;
    struct Ordonnanceur *next;
}Ordonnanceur, *Ordonnanceur1;



/* Paramètres statiques de l'ordonnanceur */

static Ordonnanceur *tete = NULL;
static Ordonnanceur *queue = NULL;
static int nb_elements = 0;     // compteur pour la file 

static Processus *nom = NULL;
static Processus *duree = 0;
static Processus *priorite = 0;


/* ... */
Bool empty_or_not(void);                // la file est-elle vide ?
int Ordonnanceur_length(void);          // longueur de la file
Processus tete_ordonnanceur(void);      // retourne la tete -- à utiliser pr l'affichage dasn step()
Processus queue_ordonnanceur(void);     // retourne la queue
void step(void);
void ajout_activite(Processus x, char* name, int duree, int priority);
void pop_ordonnanceur(void);

#endif