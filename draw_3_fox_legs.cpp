#include "project.h"

void draw_3_fox_legs(cairo_t* cr, int x, int y, int r)
{
    const int HEIGHT = 600;
    int a1 = 0;  double a2 = 2 * PI;
    
    cairo_arc(cr,x-48,HEIGHT-y+40,r/4,a1,a2);
    cairo_set_source_rgb(cr,1,0,0);
    cairo_fill(cr);
    cairo_move_to(cr,x-52,HEIGHT-y+37);
    cairo_line_to(cr,x-61,HEIGHT-y+53);
    cairo_line_to(cr,x-52,HEIGHT-y+59);
    cairo_line_to(cr,x-44,HEIGHT-y+43);
    cairo_fill(cr);
    cairo_arc(cr,x-57,HEIGHT-y+56,r/4,a1,a2);
    cairo_fill(cr); //front left leg
    
    cairo_arc(cr,x-1,HEIGHT-y+40,r/4,a1,a2);
    cairo_set_source_rgb(cr,1,0,0);
    cairo_fill(cr);
    cairo_move_to(cr,x-6,HEIGHT-y+40);
    cairo_line_to(cr,x+1,HEIGHT-y+56);
    cairo_line_to(cr,x+10,HEIGHT-y+51);
    cairo_line_to(cr,x+3,HEIGHT-y+35);
    cairo_fill(cr);
    cairo_arc(cr,x+5,HEIGHT-y+54,r/4,a1,a2);
    cairo_fill(cr); //front right leg
}
