#include "project.h"

void animate_cb (void*) {
    extern unsigned int t;
    extern Fl_Cairo_Window mainWindow;
    t++;
    mainWindow.redraw ();
    Fl::repeat_timeout (0.0625, animate_cb); // 1/16 of a second
}
