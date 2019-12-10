#include <gtk/gtk.h>

void
on_valider_clicked                     (GtkWidget       *obj,
                                        gpointer         user_data);

void
on_affiche_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_retour_clicked                      (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_supprimer_clicked                   (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button2_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_modf_clicked                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_closebutton1_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_closebutton2_clicked                (GtkButton       *button,
                                        gpointer         user_data);
