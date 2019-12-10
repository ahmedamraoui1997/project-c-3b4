/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_Ajouter_voiture (void)
{
  GtkWidget *Ajouter_voiture;
  GtkWidget *vbox1;
  GtkWidget *vbox2;
  GtkWidget *fixed4;
  GtkWidget *marque;
  GtkWidget *marque1;
  GtkWidget *fixed3;
  GtkWidget *modele;
  GtkWidget *modele1;
  GtkWidget *fixed2;
  GtkWidget *couleur;
  GtkWidget *couleur1;
  GtkWidget *fixed1;
  GtkWidget *prix;
  GtkWidget *prix_jour1;
  GtkWidget *fixed5;
  GtkWidget *quitter1;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label5;
  GtkWidget *afficher;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *label7;
  GtkWidget *Ok;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *label6;

  Ajouter_voiture = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Ajouter_voiture), _("Ajouter voiture"));

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (Ajouter_voiture), vbox1);

  vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox2);
  gtk_box_pack_start (GTK_BOX (vbox1), vbox2, TRUE, TRUE, 0);

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_box_pack_start (GTK_BOX (vbox2), fixed4, TRUE, TRUE, 0);
  gtk_widget_set_size_request (fixed4, -1, 50);

  marque = gtk_entry_new ();
  gtk_widget_show (marque);
  gtk_fixed_put (GTK_FIXED (fixed4), marque, 128, 24);
  gtk_widget_set_size_request (marque, 175, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (marque), 8226);

  marque1 = gtk_label_new (_("Marque"));
  gtk_widget_show (marque1);
  gtk_fixed_put (GTK_FIXED (fixed4), marque1, 32, 24);
  gtk_widget_set_size_request (marque1, 80, 32);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_box_pack_start (GTK_BOX (vbox2), fixed3, TRUE, TRUE, 0);
  gtk_widget_set_size_request (fixed3, -1, 50);

  modele = gtk_entry_new ();
  gtk_widget_show (modele);
  gtk_fixed_put (GTK_FIXED (fixed3), modele, 128, 16);
  gtk_widget_set_size_request (modele, 175, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (modele), 8226);

  modele1 = gtk_label_new (_("Modele"));
  gtk_widget_show (modele1);
  gtk_fixed_put (GTK_FIXED (fixed3), modele1, 40, 16);
  gtk_widget_set_size_request (modele1, 64, 32);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_box_pack_start (GTK_BOX (vbox2), fixed2, TRUE, TRUE, 0);
  gtk_widget_set_size_request (fixed2, -1, 50);

  couleur = gtk_entry_new ();
  gtk_widget_show (couleur);
  gtk_fixed_put (GTK_FIXED (fixed2), couleur, 128, 8);
  gtk_widget_set_size_request (couleur, 175, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (couleur), 8226);

  couleur1 = gtk_label_new (_("Couleur"));
  gtk_widget_show (couleur1);
  gtk_fixed_put (GTK_FIXED (fixed2), couleur1, 40, 8);
  gtk_widget_set_size_request (couleur1, 56, 32);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_box_pack_start (GTK_BOX (vbox2), fixed1, TRUE, TRUE, 0);
  gtk_widget_set_size_request (fixed1, -1, 30);

  prix = gtk_entry_new ();
  gtk_widget_show (prix);
  gtk_fixed_put (GTK_FIXED (fixed1), prix, 128, 0);
  gtk_widget_set_size_request (prix, 175, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (prix), 8226);

  prix_jour1 = gtk_label_new (_("Prix par jour :"));
  gtk_widget_show (prix_jour1);
  gtk_fixed_put (GTK_FIXED (fixed1), prix_jour1, 8, 0);
  gtk_widget_set_size_request (prix_jour1, 112, 32);

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_box_pack_start (GTK_BOX (vbox1), fixed5, TRUE, TRUE, 0);

  quitter1 = gtk_button_new ();
  gtk_widget_show (quitter1);
  gtk_fixed_put (GTK_FIXED (fixed5), quitter1, 264, 64);
  gtk_widget_set_size_request (quitter1, 88, 32);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (quitter1), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-quit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label5 = gtk_label_new_with_mnemonic (_("Quitter"));
  gtk_widget_show (label5);
  gtk_box_pack_start (GTK_BOX (hbox1), label5, FALSE, FALSE, 0);

  afficher = gtk_button_new ();
  gtk_widget_show (afficher);
  gtk_fixed_put (GTK_FIXED (fixed5), afficher, 40, 16);
  gtk_widget_set_size_request (afficher, 91, 33);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (afficher), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  label7 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (label7);
  gtk_box_pack_start (GTK_BOX (hbox3), label7, FALSE, FALSE, 0);

  Ok = gtk_button_new ();
  gtk_widget_show (Ok);
  gtk_fixed_put (GTK_FIXED (fixed5), Ok, 272, 16);
  gtk_widget_set_size_request (Ok, 70, 33);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (Ok), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  label6 = gtk_label_new_with_mnemonic (_("OK"));
  gtk_widget_show (label6);
  gtk_box_pack_start (GTK_BOX (hbox2), label6, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) quitter1, "clicked",
                    G_CALLBACK (on_quitter_clicked),
                    NULL);
  g_signal_connect ((gpointer) afficher, "clicked",
                    G_CALLBACK (on_afficher_clicked),
                    NULL);
  g_signal_connect ((gpointer) Ok, "clicked",
                    G_CALLBACK (on_Ok_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Ajouter_voiture, Ajouter_voiture, "Ajouter_voiture");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, vbox2, "vbox2");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, marque, "marque");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, marque1, "marque1");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, modele, "modele");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, modele1, "modele1");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, couleur, "couleur");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, couleur1, "couleur1");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, prix, "prix");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, prix_jour1, "prix_jour1");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, quitter1, "quitter1");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, image1, "image1");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, label5, "label5");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, afficher, "afficher");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, label7, "label7");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, Ok, "Ok");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (Ajouter_voiture, label6, "label6");

  return Ajouter_voiture;
}

GtkWidget*
create_Reservation_voiture (void)
{
  GtkWidget *Reservation_voiture;
  GtkWidget *vbox3;
  GtkWidget *fixed6;
  GtkObject *jr_adj;
  GtkWidget *jr;
  GtkObject *ms_adj;
  GtkWidget *ms;
  GtkObject *an_adj;
  GtkWidget *an;
  GtkWidget *label12;
  GtkWidget *label_date;
  GtkWidget *label_couleur;
  GtkWidget *label_modele;
  GtkWidget *label_Marque;
  GtkWidget *marque2;
  GtkWidget *couleur2;
  GtkWidget *modele2;
  GtkWidget *nbj;
  GtkWidget *fixed7;
  GtkWidget *quitter;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image3;
  GtkWidget *label14;
  GtkWidget *Ok;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image2;
  GtkWidget *label13;

  Reservation_voiture = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Reservation_voiture), _("R\303\251servation  voiture"));

  vbox3 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox3);
  gtk_container_add (GTK_CONTAINER (Reservation_voiture), vbox3);

  fixed6 = gtk_fixed_new ();
  gtk_widget_show (fixed6);
  gtk_box_pack_start (GTK_BOX (vbox3), fixed6, TRUE, TRUE, 0);
  gtk_widget_set_size_request (fixed6, -1, 284);

  jr_adj = gtk_adjustment_new (1, 0, 30, 1, 10, 10);
  jr = gtk_spin_button_new (GTK_ADJUSTMENT (jr_adj), 1, 0);
  gtk_widget_show (jr);
  gtk_fixed_put (GTK_FIXED (fixed6), jr, 112, 192);
  gtk_widget_set_size_request (jr, 70, 34);

  ms_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  ms = gtk_spin_button_new (GTK_ADJUSTMENT (ms_adj), 1, 0);
  gtk_widget_show (ms);
  gtk_fixed_put (GTK_FIXED (fixed6), ms, 192, 192);
  gtk_widget_set_size_request (ms, 70, 34);

  an_adj = gtk_adjustment_new (1, 2019, 2040, 1, 10, 10);
  an = gtk_spin_button_new (GTK_ADJUSTMENT (an_adj), 1, 0);
  gtk_widget_show (an);
  gtk_fixed_put (GTK_FIXED (fixed6), an, 272, 192);
  gtk_widget_set_size_request (an, 70, 34);

  label12 = gtk_label_new (_("nombre de jour :"));
  gtk_widget_show (label12);
  gtk_fixed_put (GTK_FIXED (fixed6), label12, 0, 248);
  gtk_widget_set_size_request (label12, 136, 32);

  label_date = gtk_label_new (_("Date:"));
  gtk_widget_show (label_date);
  gtk_fixed_put (GTK_FIXED (fixed6), label_date, 32, 192);
  gtk_widget_set_size_request (label_date, 64, 32);

  label_couleur = gtk_label_new (_("couleur :"));
  gtk_widget_show (label_couleur);
  gtk_fixed_put (GTK_FIXED (fixed6), label_couleur, 32, 144);
  gtk_widget_set_size_request (label_couleur, 64, 32);

  label_modele = gtk_label_new (_("Mod\303\251le :"));
  gtk_widget_show (label_modele);
  gtk_fixed_put (GTK_FIXED (fixed6), label_modele, 32, 88);
  gtk_widget_set_size_request (label_modele, 64, 32);

  label_Marque = gtk_label_new (_("Marque :"));
  gtk_widget_show (label_Marque);
  gtk_fixed_put (GTK_FIXED (fixed6), label_Marque, 32, 32);
  gtk_widget_set_size_request (label_Marque, 72, 32);

  marque2 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (marque2);
  gtk_fixed_put (GTK_FIXED (fixed6), marque2, 112, 32);
  gtk_widget_set_size_request (marque2, 206, 34);
  gtk_combo_box_append_text (GTK_COMBO_BOX (marque2), _(" BM"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (marque2), _("peugeot"));

  couleur2 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (couleur2);
  gtk_fixed_put (GTK_FIXED (fixed6), couleur2, 112, 144);
  gtk_widget_set_size_request (couleur2, 206, 34);
  gtk_combo_box_append_text (GTK_COMBO_BOX (couleur2), _("noir"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (couleur2), _("rouge"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (couleur2), _("bleu"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (couleur2), _("gris"));

  modele2 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (modele2);
  gtk_fixed_put (GTK_FIXED (fixed6), modele2, 112, 88);
  gtk_widget_set_size_request (modele2, 206, 34);
  gtk_combo_box_append_text (GTK_COMBO_BOX (modele2), _("308"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (modele2), _("206"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (modele2), _("106"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (modele2), _("C4"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (modele2), _("C3"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (modele2), _("A3"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (modele2), _("A4"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (modele2), _("A5"));

  nbj = gtk_entry_new ();
  gtk_widget_show (nbj);
  gtk_fixed_put (GTK_FIXED (fixed6), nbj, 128, 248);
  gtk_widget_set_size_request (nbj, 56, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (nbj), 8226);

  fixed7 = gtk_fixed_new ();
  gtk_widget_show (fixed7);
  gtk_box_pack_start (GTK_BOX (vbox3), fixed7, TRUE, TRUE, 0);
  gtk_widget_set_size_request (fixed7, -1, 111);

  quitter = gtk_button_new ();
  gtk_widget_show (quitter);
  gtk_fixed_put (GTK_FIXED (fixed7), quitter, 48, 24);
  gtk_widget_set_size_request (quitter, 88, 40);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (quitter), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image3 = gtk_image_new_from_stock ("gtk-quit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox5), image3, FALSE, FALSE, 0);

  label14 = gtk_label_new_with_mnemonic (_("Quitter"));
  gtk_widget_show (label14);
  gtk_box_pack_start (GTK_BOX (hbox5), label14, FALSE, FALSE, 0);

  Ok = gtk_button_new ();
  gtk_widget_show (Ok);
  gtk_fixed_put (GTK_FIXED (fixed7), Ok, 296, 16);
  gtk_widget_set_size_request (Ok, 72, 40);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (Ok), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image2 = gtk_image_new_from_stock ("gtk-ok", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox4), image2, FALSE, FALSE, 0);

  label13 = gtk_label_new_with_mnemonic (_("OK"));
  gtk_widget_show (label13);
  gtk_box_pack_start (GTK_BOX (hbox4), label13, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) quitter, "clicked",
                    G_CALLBACK (on_quitter_clicked),
                    NULL);
  g_signal_connect ((gpointer) Ok, "clicked",
                    G_CALLBACK (on_Ok_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Reservation_voiture, Reservation_voiture, "Reservation_voiture");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, vbox3, "vbox3");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, fixed6, "fixed6");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, jr, "jr");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, ms, "ms");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, an, "an");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, label12, "label12");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, label_date, "label_date");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, label_couleur, "label_couleur");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, label_modele, "label_modele");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, label_Marque, "label_Marque");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, marque2, "marque2");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, couleur2, "couleur2");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, modele2, "modele2");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, nbj, "nbj");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, fixed7, "fixed7");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, quitter, "quitter");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, image3, "image3");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, label14, "label14");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, Ok, "Ok");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, image2, "image2");
  GLADE_HOOKUP_OBJECT (Reservation_voiture, label13, "label13");

  return Reservation_voiture;
}

GtkWidget*
create_Fenetre (void)
{
  GtkWidget *Fenetre;
  GtkWidget *fixed8;
  GtkWidget *scrolledwindow1;
  GtkWidget *treeview1;
  GtkWidget *Retour;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image6;
  GtkWidget *label17;
  GtkWidget *button_supprimer;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image5;
  GtkWidget *label16;
  GtkWidget *button_modifier;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image4;
  GtkWidget *label15;

  Fenetre = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Fenetre), _("Fenetre"));

  fixed8 = gtk_fixed_new ();
  gtk_widget_show (fixed8);
  gtk_container_add (GTK_CONTAINER (Fenetre), fixed8);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow1);
  gtk_fixed_put (GTK_FIXED (fixed8), scrolledwindow1, 0, 8);
  gtk_widget_set_size_request (scrolledwindow1, 400, 136);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), treeview1);

  Retour = gtk_button_new ();
  gtk_widget_show (Retour);
  gtk_fixed_put (GTK_FIXED (fixed8), Retour, 304, 160);
  gtk_widget_set_size_request (Retour, 80, 40);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (Retour), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image6 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox8), image6, FALSE, FALSE, 0);

  label17 = gtk_label_new_with_mnemonic (_("Retour"));
  gtk_widget_show (label17);
  gtk_box_pack_start (GTK_BOX (hbox8), label17, FALSE, FALSE, 0);

  button_supprimer = gtk_button_new ();
  gtk_widget_show (button_supprimer);
  gtk_fixed_put (GTK_FIXED (fixed8), button_supprimer, 152, 160);
  gtk_widget_set_size_request (button_supprimer, 104, 40);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (button_supprimer), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image5 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox7), image5, FALSE, FALSE, 0);

  label16 = gtk_label_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (label16);
  gtk_box_pack_start (GTK_BOX (hbox7), label16, FALSE, FALSE, 0);

  button_modifier = gtk_button_new ();
  gtk_widget_show (button_modifier);
  gtk_fixed_put (GTK_FIXED (fixed8), button_modifier, 0, 160);
  gtk_widget_set_size_request (button_modifier, 104, 40);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (button_modifier), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image4 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox6), image4, FALSE, FALSE, 0);

  label15 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label15);
  gtk_box_pack_start (GTK_BOX (hbox6), label15, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) treeview1, "row_activated",
                    G_CALLBACK (on_treeview1_row_activated),
                    NULL);
  g_signal_connect ((gpointer) Retour, "clicked",
                    G_CALLBACK (on_Retour_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_supprimer, "clicked",
                    G_CALLBACK (on_button_supprimer_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_modifier, "clicked",
                    G_CALLBACK (on_button_modifier_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Fenetre, Fenetre, "Fenetre");
  GLADE_HOOKUP_OBJECT (Fenetre, fixed8, "fixed8");
  GLADE_HOOKUP_OBJECT (Fenetre, scrolledwindow1, "scrolledwindow1");
  GLADE_HOOKUP_OBJECT (Fenetre, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (Fenetre, Retour, "Retour");
  GLADE_HOOKUP_OBJECT (Fenetre, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (Fenetre, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (Fenetre, image6, "image6");
  GLADE_HOOKUP_OBJECT (Fenetre, label17, "label17");
  GLADE_HOOKUP_OBJECT (Fenetre, button_supprimer, "button_supprimer");
  GLADE_HOOKUP_OBJECT (Fenetre, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (Fenetre, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (Fenetre, image5, "image5");
  GLADE_HOOKUP_OBJECT (Fenetre, label16, "label16");
  GLADE_HOOKUP_OBJECT (Fenetre, button_modifier, "button_modifier");
  GLADE_HOOKUP_OBJECT (Fenetre, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (Fenetre, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (Fenetre, image4, "image4");
  GLADE_HOOKUP_OBJECT (Fenetre, label15, "label15");

  return Fenetre;
}

GtkWidget*
create_dialog1 (void)
{
  GtkWidget *dialog1;
  GtkWidget *dialog_vbox1;
  GtkWidget *fixed9;
  GtkWidget *label18;
  GtkWidget *dialog_action_area1;
  GtkWidget *closebutton1;

  dialog1 = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (dialog1), _("dialog1"));
  gtk_window_set_type_hint (GTK_WINDOW (dialog1), GDK_WINDOW_TYPE_HINT_DIALOG);
  gtk_dialog_set_has_separator (GTK_DIALOG (dialog1), FALSE);

  dialog_vbox1 = GTK_DIALOG (dialog1)->vbox;
  gtk_widget_show (dialog_vbox1);

  fixed9 = gtk_fixed_new ();
  gtk_widget_show (fixed9);
  gtk_box_pack_start (GTK_BOX (dialog_vbox1), fixed9, TRUE, TRUE, 0);

  label18 = gtk_label_new (_("cette confirmation \nest  enregistrer avec succ\303\251e"));
  gtk_widget_show (label18);
  gtk_fixed_put (GTK_FIXED (fixed9), label18, 8, 48);
  gtk_widget_set_size_request (label18, 280, 146);

  dialog_action_area1 = GTK_DIALOG (dialog1)->action_area;
  gtk_widget_show (dialog_action_area1);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area1), GTK_BUTTONBOX_END);

  closebutton1 = gtk_button_new_from_stock ("gtk-close");
  gtk_widget_show (closebutton1);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog1), closebutton1, GTK_RESPONSE_CLOSE);
  GTK_WIDGET_SET_FLAGS (closebutton1, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) closebutton1, "clicked",
                    G_CALLBACK (on_closebutton1_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (dialog1, dialog1, "dialog1");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog1, dialog_vbox1, "dialog_vbox1");
  GLADE_HOOKUP_OBJECT (dialog1, fixed9, "fixed9");
  GLADE_HOOKUP_OBJECT (dialog1, label18, "label18");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog1, dialog_action_area1, "dialog_action_area1");
  GLADE_HOOKUP_OBJECT (dialog1, closebutton1, "closebutton1");

  return dialog1;
}

GtkWidget*
create_dialog2 (void)
{
  GtkWidget *dialog2;
  GtkWidget *dialog_vbox2;
  GtkWidget *fixed10;
  GtkWidget *label19;
  GtkWidget *dialog_action_area2;
  GtkWidget *closebutton2;

  dialog2 = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (dialog2), _("dialog2"));
  gtk_window_set_type_hint (GTK_WINDOW (dialog2), GDK_WINDOW_TYPE_HINT_DIALOG);
  gtk_dialog_set_has_separator (GTK_DIALOG (dialog2), FALSE);

  dialog_vbox2 = GTK_DIALOG (dialog2)->vbox;
  gtk_widget_show (dialog_vbox2);

  fixed10 = gtk_fixed_new ();
  gtk_widget_show (fixed10);
  gtk_box_pack_start (GTK_BOX (dialog_vbox2), fixed10, TRUE, TRUE, 0);

  label19 = gtk_label_new (_("Il faut le remplir"));
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (fixed10), label19, 64, 64);
  gtk_widget_set_size_request (label19, 168, 56);

  dialog_action_area2 = GTK_DIALOG (dialog2)->action_area;
  gtk_widget_show (dialog_action_area2);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area2), GTK_BUTTONBOX_END);

  closebutton2 = gtk_button_new_from_stock ("gtk-close");
  gtk_widget_show (closebutton2);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog2), closebutton2, GTK_RESPONSE_CLOSE);
  GTK_WIDGET_SET_FLAGS (closebutton2, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) closebutton2, "clicked",
                    G_CALLBACK (on_closebutton2_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (dialog2, dialog2, "dialog2");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog2, dialog_vbox2, "dialog_vbox2");
  GLADE_HOOKUP_OBJECT (dialog2, fixed10, "fixed10");
  GLADE_HOOKUP_OBJECT (dialog2, label19, "label19");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog2, dialog_action_area2, "dialog_action_area2");
  GLADE_HOOKUP_OBJECT (dialog2, closebutton2, "closebutton2");

  return dialog2;
}

GtkWidget*
create_dialog3 (void)
{
  GtkWidget *dialog3;
  GtkWidget *dialog_vbox3;
  GtkWidget *fixed11;
  GtkWidget *label20;
  GtkWidget *dialog_action_area3;
  GtkWidget *closebutton3;

  dialog3 = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (dialog3), _("dialog3"));
  gtk_window_set_type_hint (GTK_WINDOW (dialog3), GDK_WINDOW_TYPE_HINT_DIALOG);
  gtk_dialog_set_has_separator (GTK_DIALOG (dialog3), FALSE);

  dialog_vbox3 = GTK_DIALOG (dialog3)->vbox;
  gtk_widget_show (dialog_vbox3);

  fixed11 = gtk_fixed_new ();
  gtk_widget_show (fixed11);
  gtk_box_pack_start (GTK_BOX (dialog_vbox3), fixed11, TRUE, TRUE, 0);

  label20 = gtk_label_new (_("cette confirmation est enregistr\303\251e \navec succ\303\251e"));
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed11), label20, 8, 24);
  gtk_widget_set_size_request (label20, 296, 128);

  dialog_action_area3 = GTK_DIALOG (dialog3)->action_area;
  gtk_widget_show (dialog_action_area3);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area3), GTK_BUTTONBOX_END);

  closebutton3 = gtk_button_new_from_stock ("gtk-close");
  gtk_widget_show (closebutton3);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog3), closebutton3, GTK_RESPONSE_CLOSE);
  GTK_WIDGET_SET_FLAGS (closebutton3, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) closebutton3, "clicked",
                    G_CALLBACK (on_closebutton3_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (dialog3, dialog3, "dialog3");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog3, dialog_vbox3, "dialog_vbox3");
  GLADE_HOOKUP_OBJECT (dialog3, fixed11, "fixed11");
  GLADE_HOOKUP_OBJECT (dialog3, label20, "label20");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog3, dialog_action_area3, "dialog_action_area3");
  GLADE_HOOKUP_OBJECT (dialog3, closebutton3, "closebutton3");

  return dialog3;
}

GtkWidget*
create_dialog4 (void)
{
  GtkWidget *dialog4;
  GtkWidget *dialog_vbox4;
  GtkWidget *fixed12;
  GtkWidget *label21;
  GtkWidget *dialog_action_area4;
  GtkWidget *closebutton4;

  dialog4 = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (dialog4), _("dialog4"));
  gtk_window_set_type_hint (GTK_WINDOW (dialog4), GDK_WINDOW_TYPE_HINT_DIALOG);
  gtk_dialog_set_has_separator (GTK_DIALOG (dialog4), FALSE);

  dialog_vbox4 = GTK_DIALOG (dialog4)->vbox;
  gtk_widget_show (dialog_vbox4);

  fixed12 = gtk_fixed_new ();
  gtk_widget_show (fixed12);
  gtk_box_pack_start (GTK_BOX (dialog_vbox4), fixed12, TRUE, TRUE, 0);

  label21 = gtk_label_new (_("Il faut le remplir"));
  gtk_widget_show (label21);
  gtk_fixed_put (GTK_FIXED (fixed12), label21, 40, 72);
  gtk_widget_set_size_request (label21, 192, 64);

  dialog_action_area4 = GTK_DIALOG (dialog4)->action_area;
  gtk_widget_show (dialog_action_area4);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area4), GTK_BUTTONBOX_END);

  closebutton4 = gtk_button_new_from_stock ("gtk-close");
  gtk_widget_show (closebutton4);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog4), closebutton4, GTK_RESPONSE_CLOSE);
  GTK_WIDGET_SET_FLAGS (closebutton4, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) closebutton4, "clicked",
                    G_CALLBACK (on_closebutton4_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (dialog4, dialog4, "dialog4");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog4, dialog_vbox4, "dialog_vbox4");
  GLADE_HOOKUP_OBJECT (dialog4, fixed12, "fixed12");
  GLADE_HOOKUP_OBJECT (dialog4, label21, "label21");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog4, dialog_action_area4, "dialog_action_area4");
  GLADE_HOOKUP_OBJECT (dialog4, closebutton4, "closebutton4");

  return dialog4;
}

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed13;
  GtkWidget *treeview2;
  GtkWidget *button1;
  GtkWidget *button2;
  GtkWidget *alignment9;
  GtkWidget *hbox9;
  GtkWidget *image7;
  GtkWidget *label22;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));

  fixed13 = gtk_fixed_new ();
  gtk_widget_show (fixed13);
  gtk_container_add (GTK_CONTAINER (window1), fixed13);

  treeview2 = gtk_tree_view_new ();
  gtk_widget_show (treeview2);
  gtk_fixed_put (GTK_FIXED (fixed13), treeview2, 0, 0);
  gtk_widget_set_size_request (treeview2, 480, 208);

  button1 = gtk_button_new_from_stock ("gtk-delete");
  gtk_widget_show (button1);
  gtk_fixed_put (GTK_FIXED (fixed13), button1, 120, 256);
  gtk_widget_set_size_request (button1, 112, 40);

  button2 = gtk_button_new ();
  gtk_widget_show (button2);
  gtk_fixed_put (GTK_FIXED (fixed13), button2, 328, 256);
  gtk_widget_set_size_request (button2, 88, 41);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (button2), alignment9);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox9);

  image7 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox9), image7, FALSE, FALSE, 0);

  label22 = gtk_label_new_with_mnemonic (_("Retour"));
  gtk_widget_show (label22);
  gtk_box_pack_start (GTK_BOX (hbox9), label22, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_button1_clicked),
                    NULL);
  g_signal_connect ((gpointer) button2, "clicked",
                    G_CALLBACK (on_button2_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed13, "fixed13");
  GLADE_HOOKUP_OBJECT (window1, treeview2, "treeview2");
  GLADE_HOOKUP_OBJECT (window1, button1, "button1");
  GLADE_HOOKUP_OBJECT (window1, button2, "button2");
  GLADE_HOOKUP_OBJECT (window1, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (window1, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (window1, image7, "image7");
  GLADE_HOOKUP_OBJECT (window1, label22, "label22");

  return window1;
}

