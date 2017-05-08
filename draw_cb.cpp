#include "project.h"

void draw_cb (Fl_Cairo_Window* cw, cairo_t* cr) {
    extern unsigned int t;
    if (t < SCENE2) {
        draw_background (cr, "backgrounds/sandy_beach_background.png");
        draw_caption (cr, captions[0].c_str (), captions[1].c_str ());
        cairo_save (cr);
        cairo_translate (cr, 600, 300);
        draw_sand_mites (cr);
        cairo_restore (cr);
        cairo_save (cr);
        cairo_translate (cr, 150, 400);
        draw_crab (cr, 1);
        cairo_restore (cr);
    }
    else if (t < SCENE3) {
        static int dx = 0;
        draw_background (cr, "backgrounds/sandy_beach_background.png");
        draw_caption (cr, captions[2].c_str ());
        cairo_save (cr);
        cairo_translate (cr, 600, 300);
        draw_sand_mites (cr);
        cairo_restore (cr);
        cairo_save (cr);
        cairo_translate (cr, 150 + dx, 400);
        draw_crab (cr, 1);
        cairo_restore (cr);
        dx += 5;
    }
    else if (t < SCENE4) {
        static int dx = 0;
        static int dy = 0;
        static double scale = 1.0;
        draw_background (cr, "backgrounds/desert_background.png");
        draw_caption (cr, captions[3].c_str (), captions[4].c_str ());
        if (t < SCENE3 + 96) {
            cairo_save (cr);
            cairo_translate (cr, 0 + dx, 400);
            draw_crab (cr, 1);
            cairo_restore (cr);
            if (t < SCENE3 + 48) dx += 4;
        }
        else {
            cairo_save (cr);
            cairo_translate (cr, 0 + dx, 400 + dy);
            cairo_scale (cr, scale, scale);
            draw_crab (cr, 2);
            cairo_restore (cr);
            dx += 2; dy -= 2;
            scale *= 0.98;
        }
        
    }
    else if (t < SCENE5) {
        static int dx = 0; static int dy = 0;
        draw_background (cr, "backgrounds/meadow_background.png");
        draw_caption (cr, captions[5].c_str ());
        if (t < SCENE4 + 44) {
            static double scale = 0.4111;
            cairo_save (cr);
            cairo_translate (cr, 280 + dx, 260 + dy);
            cairo_scale (cr, scale, scale);
            draw_crab (cr, 0);
            cairo_restore(cr);
            dx -= 2; dy += 2;
            scale /= 0.98;
        }
        else if (t < SCENE4 + 76) {
            static double rotate = 0.0;
            cairo_save (cr);
            cairo_translate (cr, 280 + dx, 260 + dy);
            cairo_rotate (cr, rotate);
            draw_crab (cr, 0);
            cairo_restore (cr);
            rotate -= PI / 16;
            if (t < SCENE4 + 60) dy -= 5;
            else dy += 5;
        }
        else {
            cairo_save (cr);
            cairo_translate (cr, 280 + dx, 260 + dy);
            draw_crab (cr, 0);
            cairo_restore (cr);
        }
    }
    else if (t < SCENE6) {
        draw_background (cr, "backgrounds/meadow_background.png");
        draw_caption (cr, captions[6].c_str ());
    }
    else if (t < SCENE7) {
        draw_background (cr, "backgrounds/meadow_background.png");
        draw_caption (cr, captions[7].c_str ());
    }
    else if (t < SCENE8) {
        draw_background (cr, "backgrounds/meadow_background.png");
        draw_caption (cr, captions[8].c_str ());
    }
    else {
        draw_background (cr, "backgrounds/meadow_background.png");
        draw_caption (cr, captions[9].c_str ());
    }
}
