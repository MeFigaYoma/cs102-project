#include "project.h"

void draw_sand_mites (cairo_t* cr)
{
    static int m = 0;
    double angle = 2 * PI;
    cairo_set_source_rgb (cr, 0, 0, 0); // black paint
    cairo_arc (cr, 0 + m, 0, 4, 0, angle);
    cairo_fill (cr);
    cairo_arc (cr, 19 + m, 10, 4, 0, angle);
    cairo_fill (cr);
    cairo_arc (cr, 0 + m, 15, 4, 0, angle);
    cairo_fill(cr);
    cairo_arc (cr, 30 + m, 32, 4, 0, angle);
    cairo_fill (cr);
    cairo_arc (cr, 20 + m, 25, 4, 0, angle);
    cairo_fill (cr);
    cairo_arc (cr, 40 + m, 17, 4, 0, angle);
    cairo_fill (cr);
    cairo_set_source_rgb (cr, 0.36, 0.25, 0.2); // brown paint
    cairo_arc (cr, 24 + m, 45, 4, 0, angle);
    cairo_fill (cr);
    cairo_arc (cr, 30 + m, 0, 4, 0, angle);
    cairo_fill (cr);
    cairo_arc (cr, 40 + m, 36, 4, 0, angle);
    cairo_fill (cr);
    cairo_arc (cr, 50 + m, 55, 4, 0, angle);
    cairo_fill (cr);
    cairo_arc (cr, 0 + m, 30, 4, 0, angle);
    cairo_fill (cr);
    cairo_arc (cr, 50 + m, 15, 4, 0, angle);
    cairo_fill (cr);
    m = (m + 2) % 4;
}
