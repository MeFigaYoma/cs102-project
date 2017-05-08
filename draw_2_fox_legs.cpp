#include "project.h"

void draw_2_fox_legs(cairo_t* cr, int x, int y, int r)
{
    const int HEIGHT = 600;
    int a1 = 0;  double a2 = PI * 2;
    
    cairo_arc(cr,x-48,HEIGHT-y+40,r/4,a1,a2);
    cairo_set_source_rgb(cr,1,0,0);
    cairo_fill(cr);
    cairo_move_to(cr,x-53,HEIGHT-y+40);
    cairo_line_to(cr,x-53,HEIGHT-y+58);
    cairo_line_to(cr,x-43,HEIGHT-y+58);
    cairo_line_to(cr,x-43,HEIGHT-y+40);
    cairo_fill(cr);
    cairo_arc(cr,x-48,HEIGHT-y+58,r/4,a1,a2);
    cairo_fill(cr); //front left leg
    
    cairo_arc(cr,x-1,HEIGHT-y+40,r/4,a1,a2);
    cairo_set_source_rgb(cr,1,0,0);
    cairo_fill(cr);
    cairo_move_to(cr,x-6,HEIGHT-y+40);
    cairo_line_to(cr,x-6,HEIGHT-y+58);
    cairo_line_to(cr,x+4,HEIGHT-y+58);
    cairo_line_to(cr,x+4,HEIGHT-y+40);
    cairo_fill(cr);
    cairo_arc(cr,x-1,HEIGHT-y+58,r/4,a1,a2);
    cairo_fill(cr); //front right leg
}
