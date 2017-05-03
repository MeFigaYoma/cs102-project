#include "project.h"

void draw_background (cairo_t* cr, const char* filename) {
    // cairo_surface_t* i;
    // if (t < SCENE3)
    //     i = cairo_image_surface_create_from_png ("backgrounds/sandy_beach_background.png");
    // else if(t < SCENE4)
    //     i = cairo_image_surface_create_from_png ("backgrounds/desert_background.png");
    // else
    //     i = cairo_image_surface_create_from_png ("backgrounds/meadow_background.png"); 
    // double w = cairo_image_surface_get_width (i);
    // double h = cairo_image_surface_get_height (i);
    // cairo_scale (cr, WIDTH / w, HEIGHT / h);
    cairo_surface_t* i = cairo_image_surface_create_from_png (filename);
    cairo_set_source_surface (cr, i, 0, 0);
    cairo_paint (cr);
}
