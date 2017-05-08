#include "project.h"

void draw_caption_text (cairo_t* cr, const char* line1, const char* line2) {
    cairo_text_extents_t extents;
    cairo_set_source_rgb (cr, 1, 1, 1);
    cairo_select_font_face (cr, "Georgia", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
    cairo_set_font_size (cr, 24);
    int line1Height = 100;
    if (std::string(line2) != "") {
        cairo_text_extents (cr, line2, &extents);
        cairo_move_to (cr, (800 - extents.width) / 2, 570 + (50 - extents.height) / 2);
        cairo_show_text (cr, line2);
        line1Height = 50;
    }
    cairo_text_extents (cr, line1, &extents);
    cairo_move_to (cr, (800 - extents.width) / 2, 520 + (line1Height - extents.height) / 2);
    cairo_show_text (cr, line1);
}
