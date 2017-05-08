#include "project.h"

void draw_title_page (cairo_t* cr) {
    cairo_set_source_rgb (cr, 0, 0, 0);
    cairo_rectangle (cr, 100, 100, 600, 300);
    cairo_fill (cr);
    
    cairo_set_source_rgb (cr, 1, 1, 1);
    cairo_select_font_face (cr, "Georgia", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
    cairo_set_font_size (cr, 36);
    cairo_move_to (cr, 175, 150);
    cairo_show_text (cr, "The Fox and the Crab");
    cairo_set_font_size (cr, 24);
    cairo_move_to (cr, 350, 200);
    cairo_show_text (cr, "By");
    cairo_move_to (cr, 150, 250);
    cairo_show_text (cr, "Alex Nguyen, Alexander Shtov");
    cairo_move_to (cr, 150, 275);
    cairo_show_text (cr, "Jiajun Liang, and Raymond Zerulla");
}
