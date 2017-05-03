#include "project.h"

void draw_caption_background (cairo_t* cr) {
    double xpos = 0; double ypos = 500;
    cairo_device_to_user (cr, &xpos, &ypos);
    double dx = 800; double dy = 100;
    cairo_device_to_user_distance (cr, &dx, &dy);
    cairo_set_source_rgb (cr, 0, 0, 0);
    cairo_rectangle (cr, xpos, ypos, dx, dy);
    cairo_fill (cr);
}
