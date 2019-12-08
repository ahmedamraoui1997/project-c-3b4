#include<gtk/gtk.h>
typedef struct
{
int jour;
int mois;
int annee;
}date;

typedef struct
{
char destination[20];
date dt_arrivee;
date dt_depart;
char  prix[300];
} excursion;
void ajouter_excursion(excursion e);
void afficher_excursion(GtkWidget *liste);
int modifier_excursion(excursion e);
int supprimer_excursion(char destinations[]);
