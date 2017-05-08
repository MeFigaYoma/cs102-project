#include "project.h"

void draw_cb (Fl_Cairo_Window* cw, cairo_t* cr) {
    extern unsigned int t;
    if (t < SCENE2) {
        draw_image (cr, 0);
        draw_caption (cr, captions[0].c_str (), captions[1].c_str ());
        cairo_save (cr);
        cairo_translate (cr, 600, 300);
        draw_sand_mites (cr);
        cairo_restore (cr);
        cairo_save (cr);
        cairo_translate (cr, 150, 400);
        draw_crab (cr, 1);
        cairo_restore (cr);
        if (t == 0)
            draw_title_page (cr);
    }
    else if (t < SCENE3) {
        static int dx = 0;
        draw_image (cr, 0);
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
        draw_image (cr, 1);
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
        draw_image (cr, 2);
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
        static int fdx = 0; static int fdy = 0;
        draw_image (cr, 2);
        draw_caption (cr, captions[6].c_str ());
        cairo_save (cr);
            cairo_translate (cr, 192, 348);
            draw_crab (cr, 0);
        cairo_restore (cr);
        cairo_save (cr);
            cairo_translate (cr, 1125 + fdx, -650 + fdy);
            cairo_scale (cr, -2, 2);
            draw_fox (cr);
        cairo_restore (cr);
        fdx -= 4; if (t < SCENE5 + 32) fdy -= 2;
    }
    else if (t < SCENE7) {
        cairo_save (cr);
            cairo_translate (cr, -200, -200);
            cairo_scale (cr, 1.5, 1.5);
            draw_image (cr, 2);
            if (t < SCENE6 + 32) {  // draw crab
                cairo_save (cr);
                static int dx = 0; static double scale = 1.0;
                cairo_translate (cr, 192 + dx, 380);
                cairo_scale (cr, scale, scale);
                draw_crab (cr, 2);
                dx += 10; scale *= 0.96;
                cairo_restore (cr);
            }
            cairo_save (cr); // for drawing fox image
                cairo_translate (cr, 400, 130);
                cairo_scale (cr, 0.75, 0.75);
                draw_image (cr, 3);
            cairo_restore (cr);
        cairo_restore (cr);
        draw_caption (cr, captions[7].c_str ());
        if (t >= SCENE6 + 32) { // blood
            cairo_save (cr);
            cairo_translate (cr, 200, 100);
            draw_image (cr, 4);
            cairo_restore (cr);
        }
    }
    else {
        static int fdx = 0;
        draw_image (cr, 2);
        cairo_save (cr);    // fox
            cairo_translate (cr, 565 + fdx, -714);
            cairo_scale (cr, -2, 2);
            draw_fox (cr);
        cairo_restore (cr);
        draw_caption (cr, captions[8].c_str ());
        cairo_save (cr);    // blood
            cairo_translate (cr, 200, 100);
            draw_image (cr, 4);
        cairo_restore (cr);
        fdx -= 2;
    }
}
