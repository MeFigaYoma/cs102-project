#include "project.h"

void draw_caption (cairo_t* cr, const char* inputString) {
    draw_caption_background (cr);
    draw_caption_text (cr, inputString);
}
