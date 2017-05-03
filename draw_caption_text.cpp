#include "project.h"

void draw_caption_text (cairo_t* cr, const char* inputString) {
    cairo_select_font_face (cr, "Georgia", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
    cairo_set_font_size (cr, 20);
    cairo_move_to (cr, 0, 500);
    cairo_show_text (cr, inputString);
}
