#include "project.h"
void draw_crab_face(cairo_t* cr, int x, int y, int r, int a1, double a2)
{
    const int HEIGHT = 600;
    cairo_set_source_rgb(cr,1,1,.310);
    cairo_arc(cr,x+45,HEIGHT-(y+60),r-35,a1,a2); 
    cairo_arc(cr,x+5,HEIGHT-(y+60),r-35,a1,a2); //eyes
    
    cairo_scale(cr,1,0.6);
    cairo_move_to(cr,x+5,(HEIGHT-(y+40))*1.6667);
    cairo_arc(cr,x+25,(HEIGHT-(y+40))*1.6667,r-15,0,a2/2);// mouth
         
    cairo_close_path(cr);
    cairo_fill(cr);
    cairo_stroke(cr);

}
