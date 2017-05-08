#include "project.h"
void draw_crab_pincer(cairo_t* cr, int x, int y)
{
    const int HEIGHT = 600;
    cairo_set_source_rgb(cr,.184,0.310,.310);
    cairo_move_to(cr,x,HEIGHT-(y+70));
    cairo_line_to(cr,x-25,HEIGHT-(y+70+5));
    cairo_line_to(cr,x-27,HEIGHT-(y+70+28));
    cairo_line_to(cr,x-31,HEIGHT-(y+70+44));
    cairo_line_to(cr,x-30,HEIGHT-(y+70+47));
    cairo_line_to(cr,x-26,HEIGHT-(y+70+35));
    cairo_line_to(cr,x-20,HEIGHT-(y+70+43));
    cairo_line_to(cr,x-22,HEIGHT-(y+70+28));
    cairo_line_to(cr,x-22,HEIGHT-(y+70+7));
    cairo_line_to(cr,x+2,HEIGHT-(y+70+6)); //left pincer
    
    cairo_move_to(cr,x+48,HEIGHT-(y+70));
    cairo_line_to(cr,x+48+25,HEIGHT-(y+70+5));
    cairo_line_to(cr,x+48+27,HEIGHT-(y+70+28));
    cairo_line_to(cr,x+48+31,HEIGHT-(y+70+44));
    cairo_line_to(cr,x+48+30,HEIGHT-(y+70+47));
    cairo_line_to(cr,x+48+26,HEIGHT-(y+70+35));
    cairo_line_to(cr,x+48+20,HEIGHT-(y+70+43));
    cairo_line_to(cr,x+48+22,HEIGHT-(y+70+28));
    cairo_line_to(cr,x+48+22,HEIGHT-(y+70+7));
    cairo_line_to(cr,x+48-2,HEIGHT-(y+70+6)); //left pincer
    
    cairo_close_path(cr);
    cairo_fill(cr);
    cairo_stroke(cr);

}
