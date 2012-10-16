/*--------------------------------------------------
   TGB Dual - Gameboy Emulator -
   Copyright (C) 2001  Hii

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#include "../gb_core/renderer.h"

class dmy_renderer : public renderer
{
public:
	dmy_renderer();
	~dmy_renderer();

	virtual void reset() {}
	virtual void refresh() {}
	virtual void render_screen(byte *buf,int width,int height,int depth) {}
	virtual word get_sensor(bool x_y) { return 0; }
	virtual void output_log(char *mes,...) {}
	virtual byte get_time(int type) { return 0; }
	virtual void set_time(int type,byte dat) {}
	virtual void set_bibrate(bool bibrate) {};

	virtual word map_color(word gb_col);
	virtual word unmap_color(word gb_col);
	virtual int check_pad();
	void set_pad(int state);

private:
	int key_state;
};