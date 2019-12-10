#include "voiture.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
enum
{
MARQUE,
MODELE,
COULEUR,
PRIX,
COLUMNS
};
enum
{
MARQUE1,
MODELE1,
COULEUR1,
PRIX1,
COLUMNS1
};
void ajouter_resvoit(reserve *r)
{FILE *f;
f=fopen("voiturereser.bin","ab");
if(f!=NULL)
{
fwrite(&r,sizeof(reserve),1,f);
fclose(f);
}
}
/*int tableau_reservation(reserve *tab[20])
{
int n;
FILE *f;
f=fopen("voiturereser.bin","rb");
if(f!=NULL)
{
while(fwrite(&tab,sizeof(reserve),1,f)==1)
{n++;}
fclose(f);
}
return n;
}*/
/*int verifier_reserve(reserve s)
{
reserve r;
int v=0;
FILE *f;
f=fopen("voiturereser.bin","rb");
if(f!=NULL)
{
while(!v && fread(&s,sizeof(reserve),1,f)==1)
{
   if(strcmp(r.marque,s.marque)==0)
{
    if((r.dt.jour=s.dt.jour)&&(r.dt.mois=s.dt.mois)&&(r.dt.annee=s.dt.annee))
{v=1;}
}
}
fclose(f);
}
return v;
}*/
void Ajouter_voit(ajout *T)
{FILE *f;
f=fopen("voiture.bin","ab");
if(f!=NULL)
{
fwrite(T,sizeof(ajout),1,f);
fclose(f);
}
}
void Afficher (GtkWidget *liste,ajout T)

{

GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
char Marque[20];
char Modele[20];
char Couleur[20];
int prix[20];
store=NULL;
FILE *f;
store=gtk_tree_view_get_model(GTK_TREE_VIEW(liste));
if (store==NULL)
{
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Marque", renderer,"text",MARQUE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

renderer=gtk_cell_renderer_text_new();
column= gtk_tree_view_column_new_with_attributes(" Modele", renderer,"text",MODELE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

renderer=gtk_cell_renderer_text_new();
column= gtk_tree_view_column_new_with_attributes(" Couleur", renderer,"text",COULEUR,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);
renderer=gtk_cell_renderer_text_new();
column= gtk_tree_view_column_new_with_attributes(" Prix", renderer,"text",PRIX,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);
}
store= gtk_list_store_new (COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f=fopen("voiture.bin","rb"); 
if(f!=NULL) 
{while(fread(&T,sizeof(ajout),1,f)==1)
{


gtk_list_store_append(store, &iter);
gtk_list_store_set(store,&iter,MARQUE,T.Marque,MODELE,T.Modele,COULEUR,T.Couleur,PRIX,T.Prix,-1);
}
}
fclose(f);

gtk_tree_view_set_model(GTK_TREE_VIEW (liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}
/*
typedef struct AJOUTER
{
ajv jr;
int Prix;
char Marque[20];
char Modele[20];
char Couleur[20];
}ajout;

}reserve;
*/

/*void modifier(char marque,char modele,char couleur,char prix)
{
FILE *f,*f1;
char var[50];char var1[50];char var2;char var3[50];
f=fopen("voiture","ab");
f1=fopen("","a+");
while(fscanf(f,sizeof())=1)
	{
if (strcmp(var3,prix)==0)

else
fprintf(f1,);
	}
fclose(f1);
fclose(f);
rename("src/tampo.txt","src/admin.txt");	
}*/
void dell_user(char *marque)
{
ajout T;
FILE *old;
FILE *new=NULL;

new=fopen("voiture_test.bin","wb");

fclose(new);
old=fopen("voiture.bin","rb");
new=fopen("voiture_test.bin","ab");

int i=0;
while(!(feof(old)))
{i++;
fread(&T,1,sizeof(ajout),old);}
fclose(old);
old=fopen("voiture.bin","rb");
int j=0;
while(j<i-1)
{
j++;
fread(&T,1,sizeof(ajout),old);
g_print("pseudo:%s \n",T.Marque);
if(strcmp(T.Marque,marque))
{
fwrite(&T,sizeof(ajout),1,new);
}
}
fclose(new);
fclose(old);
remove("voiture.bin");
rename("voiture_test.bin","voiture.bin");
}
void afficher_resv (GtkWidget *liste,reserve r)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
store=NULL;
FILE *f;
store=gtk_tree_view_get_model(GTK_TREE_VIEW(liste));
if (store==NULL)
{
renderer=gtk_cell_renderer_text_new();
column= gtk_tree_view_column_new_with_attributes(" marque", renderer,"text",MARQUE1,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

renderer=gtk_cell_renderer_text_new();
column= gtk_tree_view_column_new_with_attributes(" modele ", renderer,"text",MODELE1,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

renderer=gtk_cell_renderer_text_new();
column= gtk_tree_view_column_new_with_attributes(" couleur", renderer,"text",COULEUR1,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

renderer=gtk_cell_renderer_text_new();
column= gtk_tree_view_column_new_with_attributes("prix", renderer,"text",PRIX1,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

}
store= gtk_list_store_new (COLUMNS1,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
int i=0;
f=fopen("voiture.bin","rb");
while (!(feof(f)))
{
fread (&r, sizeof(reserve),1,f);
i++;
}
fclose(f);
f=fopen("voiture.bin","rb");
if(f!=NULL)
	{
	int j=0;
	while(j<i-1)
		{
		fread(&r,1,sizeof(reserve),f);

gtk_list_store_append(store, &iter);
gtk_list_store_set(store,&iter,MARQUE,r.marque,MODELE,r.modele,COULEUR,r.couleur,PRIX,r.prix,-1);
j++;
}
fclose(f);
gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}
}
dell_user_res(char *marque)
{
reserve r;
FILE *old;
FILE *new=NULL;
/*****create a temporary file *****/
new=fopen("voiture_test.bin","wb");
fclose(new);
/******copy data from old to new *******/
old=fopen("voiture.bin","rb");
new=fopen("voiture_test.bin","ab");
/**************************/
int i=0;
while(!(feof(old)))
	{i++;
	fread(&r,1,sizeof(reserve),old);
	}
fclose(old);
old=fopen("voiture.bin","rb");
/******************************/
int j=0;
while(j<i-1)
	{j++;
	fread(&r,1,sizeof(reserve),old);
	g_print("Psuedo  : %s\n",r.marque);
	if(strcmp(r.marque,marque))
		{	
		fwrite(&r,sizeof(reserve),1,new);
		}
	}
fclose(new);
fclose(old);
remove("voiture.bin");//nfas5ou il fichier li9dim
rename("voiture_test.bin","voiture.bin");//enronomiw il fichier ejdid b esm li9dim bech ye5ou blastou
/*****Na3mlo Actualiser lil liste **************/

}
