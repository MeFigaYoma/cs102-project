#include <config.h>
#include <FL/Fl_Cairo_Window.H>
#include <string>

const double PI = 3.14159265358979323846;
enum SCENE {SCENE1 = 1, SCENE2 = 80, SCENE3 = 160, SCENE4 = 240, SCENE5 = 320, SCENE6 = 400, SCENE7 = 480, SCENE8 = 560};
const std::string captions[8] = {"A Crab one day grew disgusted with the sands in which he lived.", \
                                 "He decided to take a stroll to the meadow not far inland.", \
                                 "There he would find better fare than briny water and sand mites.", \
                                 "So off he crawled to the meadow.", \
                                 "So off he crawled to the meadow.", \
                                 "But there a hungry Fox spied him . . .", \
                                 ". . . and in a twinkling, ate him up, both shell and claw.", \
                                 "Be content with your lot."};
void draw_cb (Fl_Cairo_Window*, cairo_t*);
void animate_cb (void*);
void draw_background (cairo_t*, const char*);
void draw_caption (cairo_t*, const char*);
void draw_caption_background (cairo_t* cr);
void draw_caption_text (cairo_t*, const char*);
