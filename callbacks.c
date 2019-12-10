#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>


#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include <string.h>
#include "hotel.h"



hotel h1;
hotel y;

/**************************Fonction ajout avec controle*******************************/
void
on_valider_clicked                     (GtkWidget       *obj,
                                        gpointer         user_data)
{

GtkWidget *input1,*input2,*input3;
GtkWidget *Etoiles;
hotel h;
input1=lookup_widget(obj,"Nom_hotel");
input2=lookup_widget(obj,"adresse");
input3=lookup_widget(obj,"num_responsable");
Etoiles=lookup_widget(obj,"etoiles");

strcpy (h.nom_hotel,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(h.adresse,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(h.num_responsable,gtk_entry_get_text(GTK_ENTRY(input3)));
h.etoile=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Etoiles));


ajout("fichier",&h);

if((strcmp((gtk_entry_get_text(GTK_ENTRY(input1))),"")==0)||(strcmp((gtk_entry_get_text(GTK_ENTRY(input2))),"")==0)||(strcmp((gtk_entry_get_text(GTK_ENTRY(input3))),"")==0))
{
GtkWidget *dialog2;
dialog2=create_dialog2() ;
gtk_widget_show(dialog2) ;
}

}


/**************************Fonction afficher*******************************/
void
on_affiche_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{GtkWidget *fenetre_ajout;
GtkWidget *fenetre_afficher;
hotel h1;
GtkWidget *treeview1;
  fenetre_ajout=lookup_widget(objet,"fenetre_ajout");
  gtk_widget_destroy(fenetre_ajout);
  fenetre_afficher=lookup_widget(objet,"fenetre_afficher");
  fenetre_afficher=create_fenetre_afficher();
   gtk_widget_show(fenetre_afficher);
treeview1=lookup_widget(fenetre_afficher,"treeview1");
afficher_hotel(treeview1,h1);

}

/**************************Retour de l'affichage vers l'ajout*******************************/
void
on_retour_clicked                      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *fen_log,*fen2 ;

fen2 = lookup_widget(objet,"fenetre_afficher");
gtk_widget_destroy(fen2);
fen_log = create_fenetre_ajout();
gtk_widget_show(fen_log);

}

/**************************Activation du treeview*******************************/
void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
gchar *str_data;
GtkListStore *list_store;
list_store=gtk_tree_view_get_model(treeview);
GtkTreeIter   iter;

  if (gtk_tree_model_get_iter(GTK_TREE_MODEL(list_store), &iter, path))
  {
  gtk_tree_model_get(GTK_TREE_MODEL(list_store),&iter,0, &str_data, -1);
  }
strcpy(h1.nom_hotel,str_data);

}


/**************************Fonction supprimer*******************************/
void

on_supprimer_clicked                   (GtkWidget      *button,
                                        gpointer         user_data)
{
GtkWidget *treeview1;
supprimer1(&h1.nom_hotel);
GtkWidget *fenetre_afficher=lookup_widget(GTK_WIDGET(button),"fenetre_afficher");
treeview1=lookup_widget(fenetre_afficher,"treeview1");
afficher_hotel(treeview1,h1);
gtk_widget_show(treeview1);

}


void
on_button2_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_main_quit();
}


void
on_modf_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
//GtkWidget *label=lookup_widget(GTK_WIDGET(button),"label16");
//gtk_label_set_text(GTK_LABEL(label),v.test);
dell_user((char *)h1.nom_hotel);
/*****Na3mlo Actualiser lil liste **************/
GtkWidget *fenetre_afficher=lookup_widget(GTK_WIDGET(button),"fenetre_afficher");

GtkWidget *fenetre_ajout;
fenetre_ajout=lookup_widget(GTK_WIDGET(button),("fenetre_ajout"));

gtk_widget_destroy(fenetre_afficher);
fenetre_ajout=create_fenetre_ajout();
gtk_widget_show(fenetre_ajout);
GtkWidget *Nom_hotel=lookup_widget(fenetre_ajout,"Nom_hotel");
GtkWidget *adresse=lookup_widget(fenetre_ajout,"adresse");
GtkWidget *num_responsable=lookup_widget(fenetre_ajout,"num_responsable");

gtk_entry_set_text(GTK_LABEL(Nom_hotel),h1.nom_hotel);
gtk_entry_set_text(GTK_LABEL(adresse),h1.adresse);
gtk_entry_set_text(GTK_LABEL(num_responsable),h1.num_responsable);
}

void
on_closebutton1_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *dialog1=lookup_widget(GTK_WIDGET(button),("dialog1"));

gtk_widget_destroy(dialog1);
}


void
on_closebutton2_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *dialog2=lookup_widget(GTK_WIDGET(button),"dialog2");

gtk_widget_destroy(dialog2);
;}

