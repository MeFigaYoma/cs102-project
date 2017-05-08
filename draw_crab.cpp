#include "project.h"

void draw_crab(cairo_t* cr, int faceNum)
{ 
    const int HEIGHT = 600;
    int x = -25;int y = 550;int r = 40;
    int a1 = 0; double a2 = 2*PI;
    cairo_set_source_rgb(cr,.184,0.310,.310);
    cairo_arc(cr,x+25,HEIGHT-y-50,r,a1,a2);
    cairo_fill(cr);//body
    draw_crab_legs(cr,x,y,r,a1,a2);
    draw_crab_pincer(cr,x,y);
    if (faceNum == 0) {
        draw_crab_face(cr,x,y,r,a1,a2);
    }
    else if (faceNum == 1) {
        draw_crab_sadface(cr,x,y,r,a1,a2);
    }
    else {
        draw_crab_exciteface(cr,x,y,r,a1,a2);
    }
}
