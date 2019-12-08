#include<gtk/gtk.h>
#include<stdio.h>
#include"excursion.h"
#include<string.h>


void ajouter_excursion(excursion e)
{
FILE *f;
f=fopen("document.txt","a+");
if (f!=NULL)
{
fprintf(f,"%s %d %d %d %d %d %d %s\n", e.destination,e.dt_arrivee.jour,e.dt_arrivee.mois,e.dt_arrivee.annee,e.dt_depart.jour,e.dt_depart.mois,e.dt_depart.annee,e.prix);
fclose(f);
}
}




int modifier_excursion(excursion e)
{
excursion e1;
int retour =-1;
FILE*f;
FILE*f1;
f=fopen("document.txt","r");
f1=fopen("fichier.txt","a+");
while(fscanf(f,"%s %d %d %d %d %d %d %s/n", e1.destination,&e1.dt_arrivee.jour,&e1.dt_arrivee.mois,&e1.dt_arrivee.annee,&e1.dt_depart.jour,&e1.dt_depart.mois,&e1.dt_depart.annee,e1.prix)
!=EOF)
{
if (strcmp(e1.destination,e.destination)==0)
{
fprintf(f1,"%s %d %d %d %d %d %d %s/n", e.destination,e.dt_arrivee.jour,e.dt_arrivee.mois,e.dt_arrivee.annee,e.dt_depart.jour,e.dt_depart.mois,e.dt_depart.annee,e.prix);
retour=1;
}
else
{
fprintf(f1,"%s %d %d %d %d %d %d %s/n", e1.destination,e1.dt_arrivee.jour,e1.dt_arrivee.mois,e1.dt_arrivee.annee,e1.dt_depart.jour,e1.dt_depart.mois,e1.dt_depart.annee,e1.prix);
}
}
fclose(f);
fclose(f1);
remove("document.txt");
rename("fichier.txt","document.txt");
return(retour);
}




int supprimer_excursion( char destinations[])
{
excursion e;
FILE*f;
FILE*f1;
int test=-1;
f=fopen("document.txt","r");
f1=fopen("fichier.txt","a+");
while(fscanf(f,"%s %d %d %d %d %d %d %s/n", e.destination,&e.dt_arrivee.jour,&e.dt_arrivee.mois,&e.dt_arrivee.annee,&e.dt_depart.jour,&e.dt_depart.mois,&e.dt_depart.annee,e.prix)
!=EOF)
{
if (strcmp(destinations,e.destination)!=0)
{
fprintf(f1,"%s %d %d %d %d %d %d %s/n",e.destination,e.dt_arrivee.jour,e.dt_arrivee.mois,e.dt_arrivee.annee,e.dt_depart.jour,e.dt_depart.mois,e.dt_depart.annee,e.prix);
}
else
{
test=1;
}
}
fclose(f);
fclose(f1);
remove("document.txt");
rename("fichier.txt","document.txt");
return(test);
}




void afficher_excursion(GtkWidget *liste){
enum
{
DESTINATION,
DT_ARRIVEE,
DT_DEPART,
PRIX,
COLUMNS
};


GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;

char destination[20];
char dt_arrivee[20];
char dt_depart[20];
char  prix[300];
store=NULL;
liste=gtk_tree_view_new_with_model(GTK_TREE_MODEL (store));
FILE *f;
printf("azeaz\n");
if (store==NULL)
{printf("azeaz\n");
renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("destination",renderer,"text",destination,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("dt_arrivee",renderer,"text",dt_arrivee,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("dt_depart",renderer,"text",dt_depart,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("prix",renderer,"text",prix,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING , G_TYPE_STRING , G_TYPE_STRING);
f=fopen("document.txt", "r");
 if (f==NULL)
 {
printf("null\n");
   return;
 }
 else
  {
printf("mchnull\n");
   f=fopen("document.txt", "a+");
    while(fscanf(f,"%s %s %s %s \n",destination,dt_arrivee,dt_depart,prix)!=EOF)
     {printf("kaad nekteb\n");
printf("%s %s %s %s \n",destination,dt_arrivee,dt_depart,prix);
      gtk_list_store_append (store,&iter);
      gtk_list_store_set(store,&iter,DESTINATION,destination,DT_ARRIVEE,dt_arrivee,DT_DEPART,dt_depart,PRIX,prix,-1);
     }
fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
g_object_unref(store);

}  }}
