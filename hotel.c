#include "hotel.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<gtk/gtk.h>
enum
{
 HOTEL,
 ADRESSE,
 ETOILES,
 NUMERO,
 COLUMNS
};

//   gestionhotel = "hotel"
void ajout (char gestionhotel[], hotel *h)
{
FILE *f;
f=fopen(gestionhotel,"ab+");
char temp[1024];
sprintf(temp," touch %s" , gestionhotel);
if (!f)  {g_print("error"); system(temp) ; f=fopen(gestionhotel,"rb");}  

fwrite(h,sizeof(hotel),1,f);
fclose(f);

}
void afficher_hotel(GtkWidget *show,hotel h)
{
    //hotel h;
      GtkCellRenderer *render ;
      GtkTreeViewColumn *column;
      GtkTreeIter miter;
      GtkListStore *store ;
     
      char nom_hotel[650];
      char adresse[120];
      int etoile;
      char num_responsable[30];
    store = NULL;
     
      //FILE *f ;
      store =gtk_tree_view_get_model(GTK_TREE_VIEW(show));
      if(!store){
          render = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes("hotel",render,"text",HOTEL,NULL);
          gtk_tree_view_append_column(GTK_TREE_VIEW(show),column);

           render = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes("adresse",render,"text",ADRESSE,NULL);
          gtk_tree_view_append_column(GTK_TREE_VIEW(show),column);
           render = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes("etoiles",render,"text",ETOILES,NULL);
          gtk_tree_view_append_column(GTK_TREE_VIEW(show),column);

           render = gtk_cell_renderer_text_new();
          column = gtk_tree_view_column_new_with_attributes("responsable",render,"text",NUMERO,NULL);
          gtk_tree_view_append_column(GTK_TREE_VIEW(show),column);
          
          
      }
      store = gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_INT,G_TYPE_STRING);


      FILE *f = fopen("fichier","rb") ;
      if(!f) exit(-1);

      while(fread(&h,sizeof(hotel),1,f)==1)
      {
          gtk_list_store_append(store,&miter);
          
          gtk_list_store_set(store,&miter,HOTEL,h.nom_hotel,ADRESSE,h.adresse,ETOILES,h.etoile,NUMERO,h.num_responsable,-1);

      }
      fclose(f);
      gtk_tree_view_set_model(GTK_TREE_VIEW(show),GTK_TREE_MODEL(store));
      g_object_unref(store);

}
void supprimer(char *nomb)
{
 
 FILE *f=fopen("fichier","rb");
FILE *f1=fopen("rem_Hotel","ab+");
hotel h;

int r = 1;
while(fread(&h,sizeof(hotel),1,f))
   {
      if(strcmp(nomb,h.num_responsable)!=0)
        {
               fwrite(&h,sizeof(hotel),1,f1);

         }

   }
fclose(f);
 fclose(f1);
hotel h1;
f=fopen("gestionhotel","wb");
f1=fopen("hotel_test","rb");
while(fread(&h1,sizeof(hotel),1,f1))
 {
   fwrite(&h1,sizeof(hotel) , 1, f);

  }
  fclose(f1);
   fclose(f);
  return r;



}//*

void supprimer1 (char *nom_hotel)
{
hotel h1;

FILE *old;
FILE *new_=NULL;

new_=fopen("rem_Hotel","wb");
fclose(new_);

old=fopen("fichier","rb");
new_=fopen("rem_Hotel","ab");

int i=0;
while(!(feof(old)))
       {i++;
        fread(&h1,1,sizeof(hotel),old);
       }
fclose(old);
old=fopen("fichier","rb");

int j=0;
while(j<i-1)
      {j++;
       fread(&h1,1,sizeof(hotel),old);

       if(strcmp(h1.nom_hotel,nom_hotel))
             {
             fwrite(&h1,sizeof(hotel),1,new_);
             }
      }
fclose(new_);
fclose(old);
remove("fichier");
rename("rem_Hotel","fichier");
}


void dell_user(char *nom_hotel)
{
hotel h1;
FILE *old;
FILE *new=NULL;

new=fopen("nHotels","wb");

fclose(new);
old=fopen("fichier","rb");
new=fopen("nHotels","ab");

int i=0;
while(!(feof(old)))
{i++;
fread(&h1,1,sizeof(hotel),old);}
fclose(old);
old=fopen("fichier","rb");
int j=0;
while(j<i-1)
{
j++;
fread(&h1,1,sizeof(hotel),old);
g_print("pseudo:%s \n",h1.nom_hotel);
if(strcmp(h1.nom_hotel,nom_hotel))
{
fwrite(&h1,sizeof(hotel),1,new);
}
}
fclose(new);
fclose(old);
remove("fichier");
rename("nHotels","fichier");
}



	



