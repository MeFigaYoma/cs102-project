#include "project.h"

extern unsigned int t;
extern Fl_Cairo_Window mainWindow;

void animate_cb (void*) {
    t++;
    mainWindow.redraw ();
    Fl::repeat_timeout (0.0625, animate_cb); // 1/16 of a second
}
