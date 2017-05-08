#include "project.h"

void draw_caption (cairo_t* cr, const char* line1, const char* line2) {
    draw_caption_background (cr);
    draw_caption_text (cr, line1, line2);
}
