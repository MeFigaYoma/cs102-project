#include <config.h>
#include <FL/Fl_Cairo_Window.H>
#include <string>

const double PI = 3.14159265358979323846;
enum SCENE {SCENE1 = 1, SCENE2 = 60, SCENE3 = 180, SCENE4 = 320, SCENE5 = 420, SCENE6 = 560, SCENE7 = 640, SCENE8 = 720};
const std::string captions[9] = {"A Crab one day grew disgusted with", \
                                 "the sands in which he lived.", \
                                 "He decided to take a stroll to the meadow not far inland.", \
                                 "There he would find better fare", \
                                 "than briny water and sand mites.", \
                                 "So off he crawled to the meadow.", \
                                 "But there a hungry Fox spied him . . .", \
                                 ". . . and in a twinkling, ate him up, both shell and claw.", \
                                 "Be content with your lot."};
void draw_cb (Fl_Cairo_Window*, cairo_t*);
void animate_cb (void*);
void draw_image (cairo_t*, int);
void draw_caption (cairo_t*, const char*, const char* = "");
void draw_caption_background (cairo_t* cr);
void draw_caption_text (cairo_t*, const char*, const char*);
void draw_sand_mites (cairo_t*);
void draw_crab(cairo_t*, int);
void draw_crab_exciteface(cairo_t*, int, int, int, int, double);
void draw_crab_face(cairo_t*, int, int, int, int, double);
void draw_crab_legs(cairo_t*, int, int, int, int, double);
void draw_crab_pincer(cairo_t*, int, int);
void draw_crab_sadface(cairo_t*, int, int, int, int, double);
void draw_fox (cairo_t*);
void draw_fox_body (cairo_t*, int, int, int);
void draw_fox_legs (cairo_t*, int, int, int);
void draw_2_fox_legs (cairo_t*, int, int, int);
void draw_3_fox_legs (cairo_t*, int, int, int);
void draw_title_page (cairo_t*);
