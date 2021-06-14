#include "menu.h"

#include <cstdint>

#include <FL/Fl_Menu_.H>
#include <FL/Fl_Menu_Button.H>
#include <FL/Fl_Menu_Bar.H>

#include "enumerations.h"

#include "_cgo_export.h"


int go_fltk_Menu_add(Fl_Menu_ *m, char *label, int shortcut, int callback, int flags) {
  return m->add(label, shortcut, callback_handler, (void*)(uintptr_t)callback, flags);
}

void go_fltk_Menu_set_value(Fl_Menu_ *m, int value) { 
  m->value(value);
}

int go_fltk_Menu_value(Fl_Menu_ *m) {
  return m->value();
}

int go_fltk_Menu_size(Fl_Menu_ *m) {
  return m->size();
}

Fl_Menu_Button* go_fltk_new_MenuButton(int x, int y, int w, int h, const char* text) {
  return new Fl_Menu_Button(x, y, w, h, text);
}
void go_fltk_MenuButton_set_type(Fl_Menu_Button* m, int menuType) {
  m->type(menuType);
}
void go_fltk_MenuButton_popup(Fl_Menu_Button* m) {
  m->popup();
}

Fl_Menu_Bar* go_fltk_new_MenuBar(int x, int y, int w, int h, const char* text) {
  return new Fl_Menu_Bar(x, y, w, h, text);
}

const int go_FL_POPUP1 = Fl_Menu_Button::POPUP1;
const int go_FL_POPUP2 = Fl_Menu_Button::POPUP2;
const int go_FL_POPUP12 = Fl_Menu_Button::POPUP12;
const int go_FL_POPUP3 = Fl_Menu_Button::POPUP3;
const int go_FL_POPUP13 = Fl_Menu_Button::POPUP13;
const int go_FL_POPUP23 = Fl_Menu_Button::POPUP23;
const int go_FL_POPUP123 = Fl_Menu_Button::POPUP123;


const int go_FL_MENU_INACTIVE = FL_MENU_INACTIVE;
const int go_FL_MENU_TOGGLE = FL_MENU_TOGGLE;
const int go_FL_MENU_VALUE = FL_MENU_VALUE;
const int go_FL_MENU_RADIO = FL_MENU_RADIO;
const int go_FL_MENU_INVISIBLE = FL_MENU_INVISIBLE;
const int go_FL_SUBMENU = FL_SUBMENU;
const int go_FL_MENU_DIVIDER = FL_MENU_DIVIDER;
