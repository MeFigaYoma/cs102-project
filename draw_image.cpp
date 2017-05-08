#include "project.h"

void draw_image (cairo_t* cr, int imageNum) {
    static cairo_surface_t* images[5] =
        { cairo_image_surface_create_from_png ("images/sandy_beach_background.png"),
          cairo_image_surface_create_from_png ("images/desert_background.png"),
          cairo_image_surface_create_from_png ("images/meadow_background.png"),
          cairo_image_surface_create_from_png ("images/fox.png"),
          cairo_image_surface_create_from_png ("images/blood.png") };
    cairo_set_source_surface (cr, images[imageNum], 0, 0);
    cairo_paint (cr);
}
