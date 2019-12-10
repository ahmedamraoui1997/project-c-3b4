#include <gtk/gtk.h>
typedef struct hotel hotel;
struct hotel
{char nom_hotel[20];
char adresse[20];
int  etoile;
char num_responsable[20];

} ;
void ajout (char gestionhotel[], hotel *h);
void afficher_hotel (GtkWidget * liste,hotel h);
void supprimer1 (char *num_responsable);
void dell_user(char *nom_hotel);



