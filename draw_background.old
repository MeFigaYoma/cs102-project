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
    static cairo_surface_t* imageSurface;
    static std::string oldFilename;
    if (filename != oldFilename) {
        imageSurface = cairo_image_surface_create_from_png (filename);
        oldFilename = filename;
    }   // only load background image if it's not the same one as last frame
    cairo_set_source_surface (cr, imageSurface, 0, 0);
    cairo_paint (cr);
}
