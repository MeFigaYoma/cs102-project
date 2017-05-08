#include "project.h"
void draw_crab_exciteface(cairo_t* cr, int x, int y, int r, int a1, double a2)
{
    const int HEIGHT = 600;
    cairo_set_source_rgb(cr,1,0.310,.310);
    cairo_arc(cr,x+45,HEIGHT-(y+60),r-35,a1,a2); 
    cairo_arc(cr,x+5,HEIGHT-(y+60),r-35,a1,a2); //eyes
    
    cairo_move_to(cr,x+5,(HEIGHT-(y+40)));
    cairo_arc(cr,x+25,(HEIGHT-(y+40)),r-30,0,a2);// mouth
         
    cairo_close_path(cr);
    cairo_fill(cr);
    cairo_stroke(cr);

}
