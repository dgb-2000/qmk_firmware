/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define MASTER_LEFT
//#define MASTER_RIGHT
//#define EE_HANDS
#define SPLIT_USB_DETECT

// The “permissive hold” mode, in addition to the default behavior, immediately selects the hold action when another key is tapped (pressed and then released) while the dual-role key is held down, even if this happens earlier than the tapping term. If another key is just pressed, but then the dual-role key is released before that other key (and earlier than the tapping term), this mode will still select the tap action.
#define PERMISSIVE_HOLD
