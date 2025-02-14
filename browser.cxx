#include "browser.h"

#include <FL/Fl_Browser.H>

#include "event_handler.h"


// Implemented:
//  Create Browser
//  add()
//  bottomline()
//  middleline()
//  topline()
//  clear()
//  column_char()
//  format_char()
//  displayed()
//  icon()
//  hide()
//  size()
//  value()
//  column_widths()

// TODO:
//  data() Need to implement the data in general when creating the widget
//  insert()
//  lineposition()
//  load()



class GBrowser : public EventHandler<Fl_Browser> {
public:
  GBrowser(int x, int y, int w, int h, const char *label)
    : EventHandler<Fl_Browser>(x, y, w, h, label) {}
};

GBrowser *go_fltk_new_Browser(int x, int y, int w, int h, const char *text) {
	return new GBrowser(x, y, w, h, text);
}

void go_fltk_Browser_add(GBrowser *b, const char *str, void *d=0) {
	b->add(str, d);
}

int go_fltk_Browser_topline(GBrowser *b) {
	return b->topline();
}

void go_fltk_Browser_set_bottomline(GBrowser *b, int i) {
	b->bottomline(i);
}

void go_fltk_Browser_set_middleline(GBrowser *b, int i) {
	b->middleline(i);
}

void go_fltk_Browser_set_topline(GBrowser *b, int i) {
	b->topline(i);
}

void go_fltk_Browser_clear(GBrowser *b) {
	b->clear();
}

void go_fltk_Browser_remove(GBrowser *b, int i) {
	b->remove(i);
}

char go_fltk_Browser_column_char(GBrowser *b) {
	return b->column_char();
}

void go_fltk_Browser_set_column_char(GBrowser *b, char c) {
	b->column_char(c);
}

void go_fltk_Browser_hide_line(GBrowser *b, int line) {
	b->hide(line);
}

int go_fltk_Browser_size(GBrowser *b) {
	return b->size();
}

Fl_Image* go_fltk_Browser_icon(GBrowser *b, int line) {
	return b->icon(line);
}

void go_fltk_Browser_set_icon(GBrowser *b, int line, Fl_Image *i) {
	b->icon(line, i);
}

char go_fltk_Browser_format_char(GBrowser *b) {
	return b->format_char();
}

void go_fltk_Browser_set_format_char(GBrowser *b, char c) {
	b->format_char(c);
}

int go_fltk_Browser_displayed(GBrowser *b, int line) {
	return b->displayed(line);
}

int go_fltk_Browser_value(GBrowser *b) {
	return b->value();
}

const char* go_fltk_Browser_text(GBrowser *b, int line) {
	return b->text(line);
}

void go_fltk_Browser_set_column_widths(GBrowser *b, const int *arr) {
	b->column_widths(arr);
}
