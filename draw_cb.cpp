#include "project.h"

void draw_cb (Fl_Cairo_Window* cw, cairo_t* cr) {
    extern unsigned int t;
    if (t < SCENE2) {
        draw_background (cr, "backgrounds/sandy_beach_background.png");
        draw_caption (cr, captions[0].c_str ());
        cairo_save (cr);
        cairo_translate (cr, 600, 300);
        draw_sand_mites (cr);
        cairo_restore (cr);
    }
    else if (t < SCENE3) {
        draw_background (cr, "backgrounds/sandy_beach_background.png");
        draw_caption (cr, captions[1].c_str ());
        cairo_save (cr);
        cairo_translate (cr, 600, 300);
        draw_sand_mites (cr);
        cairo_restore (cr);
    }
    else if (t < SCENE4) {
        draw_background (cr, "backgrounds/desert_background.png");
        draw_caption (cr, captions[2].c_str ());
    }
    else if (t < SCENE5) {
        draw_background (cr, "backgrounds/meadow_background.png");
        draw_caption (cr, captions[3].c_str ());
    }
    else if (t < SCENE6) {
        draw_background (cr, "backgrounds/meadow_background.png");
        draw_caption (cr, captions[4].c_str ());
    }
    else if (t < SCENE7) {
        draw_background (cr, "backgrounds/meadow_background.png");
        draw_caption (cr, captions[5].c_str ());
    }
    else if (t < SCENE8) {
        draw_background (cr, "backgrounds/meadow_background.png");
        draw_caption (cr, captions[6].c_str ());
    }
    else {
        draw_background (cr, "backgrounds/meadow_background.png");
        draw_caption (cr, captions[7].c_str ());
    }
}
