/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"
#include "hotel.h"

int
main (int argc, char *argv[])
{
  GtkWidget *window1;
  GtkWidget *window2;
  

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory ("/home/youssef/Projects/SkyTravel/Agent Hotels/project1/pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  
GtkWidget *treeview1;
  
  
  
//treeview1=lookup_widget(fenetre_afficher,"treeview1");

  window2 = create_fenetre_afficher ();
  //gtk_widget_show (window2);
  window1 = create_fenetre_ajout();
  gtk_widget_show (window1);
  /*
treeview1=lookup_widget(window2,"treeview1");
afficher_hotel(treeview1);*/
  gtk_main ();
  return 0;
}

