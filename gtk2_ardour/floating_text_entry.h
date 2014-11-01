/*
    Copyright (C) 2014 Paul Davis

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

*/

#ifndef __floating_text_entry_h__
#define __floating_text_entry_h__

#include <gtkmm/entry.h>

#include "ardour_window.h"

class FloatingTextEntry : public ArdourWindow
{
  public:
        FloatingTextEntry ();

        sigc::signal1<void,std::string> use_text;

  private:
        Gtk::Entry entry;

        bool key_press (GdkEventKey*);
        void on_realize ();
        void on_hide ();
        void activated ();
        
};

#endif // __ardour_window_h__
