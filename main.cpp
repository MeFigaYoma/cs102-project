#include "project.h"

const int WIDTH = 800; const int HEIGHT = 600;
Fl_Cairo_Window mainWindow (WIDTH, HEIGHT);
unsigned int t = 0;

int main () {
    mainWindow.label ("The Fox and the Crab");
    mainWindow.set_draw_cb (draw_cb);
    mainWindow.show ();
    Fl::add_timeout (5.0, animate_cb);
    Fl::run ();
}
