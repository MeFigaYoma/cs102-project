#include "project.h"

void draw_fox(cairo_t* cr)
{
    static int legs = 0;
    cairo_set_source_rgb(cr,1,0,0);
    int x = 100;  int y = 100;  int r = 20;
    draw_fox_body(cr,x,y,r);
    // draw_fox_legs(cr,x,y,r);
    if (legs < 2) draw_2_fox_legs (cr, x, y, r);
    else draw_3_fox_legs (cr, x, y, r);
    legs = (legs + 1) % 4;
}
