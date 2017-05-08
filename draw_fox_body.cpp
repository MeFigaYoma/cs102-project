#include "project.h"

void draw_fox_body(cairo_t* cr, int x, int y, int r)
{
    const int HEIGHT = 600;
    int a1 = 0;  double a2 = PI * 2;
    
    cairo_move_to(cr,x+20,HEIGHT-y+15);
    cairo_line_to(cr,x-50,HEIGHT-y+15);
    cairo_line_to(cr,x-53,HEIGHT-y+18);
    cairo_line_to(cr,x-53,HEIGHT-y+40);
    cairo_line_to(cr,x-6,HEIGHT-y+40);
    cairo_line_to(cr,x+8,HEIGHT-y+30);
    cairo_move_to(cr,x+20,HEIGHT-y+18);
    cairo_fill(cr);//body
    
    cairo_arc(cr,x+25,HEIGHT-y,r,a1,a2);
    cairo_fill(cr);//face
    
    cairo_arc(cr,x+25,HEIGHT-(y+r/2),r/10,a1,a2);
    cairo_arc(cr,x+35,HEIGHT-(y+r/2),r/10,a1,a2);
    cairo_set_source_rgb(cr,0,0,0);
    cairo_fill(cr);//eyes
    
    cairo_move_to(cr,x+20,HEIGHT-y-15);
    cairo_line_to(cr,x+6,HEIGHT-y-30);
    cairo_line_to(cr,x+5,HEIGHT-y);
    cairo_set_source_rgb(cr,0,0,0);
    cairo_fill(cr);//left ear
    
    cairo_move_to(cr,x+32,HEIGHT-y-15);
    cairo_line_to(cr,x+20,HEIGHT-y-32);
    cairo_line_to(cr,x+18,HEIGHT-y-17);
    cairo_set_source_rgb(cr,0,0,0);
    cairo_fill(cr);//right ear
    
    cairo_move_to(cr,x+38,HEIGHT-y-2);
    cairo_line_to(cr,x+58,HEIGHT-y-2);
    cairo_line_to(cr,x+58,HEIGHT-y+3);
    cairo_line_to(cr,x+28,HEIGHT-y+21);
    cairo_fill(cr);//mouth
    
    cairo_move_to(cr,x-52,HEIGHT-y+17);
    cairo_line_to(cr,x-60,HEIGHT-y+7);
    cairo_line_to(cr,x-60,HEIGHT-y-10);
    cairo_line_to(cr,x-50,HEIGHT-y-10);
    cairo_line_to(cr,x-50,HEIGHT-y+7);
    cairo_fill(cr);
    cairo_move_to(cr,x-60,HEIGHT-y-10);
    cairo_line_to(cr,x-58,HEIGHT-y-17);
    cairo_line_to(cr,x-50,HEIGHT-y-10);
    cairo_set_source_rgb(cr,1,0,0);
    cairo_fill(cr);//tail
}

