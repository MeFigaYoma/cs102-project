#include "project.h"
void draw_crab_legs(cairo_t* cr, int x, int y, int r, int a1, double a2)
{
    const int HEIGHT = 600;
    cairo_set_source_rgb(cr,.184,0.310,.310);
    cairo_move_to(cr,x+2,HEIGHT-(y+25));
    cairo_line_to(cr,x+2-25,HEIGHT-(y+25-5));
    cairo_arc(cr,x+2-80,HEIGHT-(y+25-10),r,0.25,0.25);
    cairo_line_to(cr,x+2-25,HEIGHT-(y+25-10));
    cairo_line_to(cr,x+2,HEIGHT-(y+25-7));//left leg
    
    cairo_move_to(cr,x+2,HEIGHT-(y+40));
    cairo_line_to(cr,x+2-25,HEIGHT-(y+40-2));
    cairo_arc(cr,x+2-80,HEIGHT-(y+40-2),r,0.25,0.25);
    cairo_line_to(cr,x+2-25,HEIGHT-(y+40-7));
    cairo_line_to(cr,x+2,HEIGHT-(y+40-7));//left leg
    
    cairo_move_to(cr,x-5,HEIGHT-(y+55));
    cairo_line_to(cr,x-3-25,HEIGHT-(y+55-2));
    cairo_arc(cr,x-3-80,HEIGHT-(y+55-2),r,0.25,0.25);
    cairo_line_to(cr,x-3-25,HEIGHT-(y+55-7));
    cairo_line_to(cr,x-3,HEIGHT-(y+55-7));//left leg
    
    cairo_move_to(cr,x+48,HEIGHT-(y+25));
    cairo_line_to(cr,x+48+25,HEIGHT-(y+25-5));
    cairo_arc_negative(cr,x+48+2,HEIGHT-(y+25-10),r,0.25,0.25);
    cairo_line_to(cr,x+48+25,HEIGHT-(y+25-10));
    cairo_line_to(cr,x+48,HEIGHT-(y+25-7));//right leg
    
    cairo_move_to(cr,x+50,HEIGHT-(y+40));
    cairo_line_to(cr,x+50+25,HEIGHT-(y+40-5));
    cairo_arc_negative(cr,x+50+2,HEIGHT-(y+40-10),r,0.25,0.25);
    cairo_line_to(cr,x+50+25,HEIGHT-(y+40-10));
    cairo_line_to(cr,x+50,HEIGHT-(y+40-7));//right leg
    
    cairo_move_to(cr,x+53,HEIGHT-(y+55));
    cairo_line_to(cr,x+53+25,HEIGHT-(y+55-5));
    cairo_arc_negative(cr,x+53+2,HEIGHT-(y+55-10),r,0.25,0.25);
    cairo_line_to(cr,x+53+25,HEIGHT-(y+55-10));
    cairo_line_to(cr,x+53,HEIGHT-(y+55-7));//right leg
    
    cairo_close_path(cr);
    cairo_fill(cr);
    cairo_stroke(cr);
}
