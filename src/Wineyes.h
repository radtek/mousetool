/*
Source file for MouseTool
MouseTool clicks the mouse when the user pauses it,
helping reduce strain caused by using the mouse.
Copyright (C) 2000 by Jeff Roush
www.mousetool.com

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
Or www.gnu.org/home.html
*/

#define UWM_MOUSETOOLHOOK                     (WM_USER+1234)
#define UWM_MOUSETOOLKEYHOOK                  (WM_USER+1235)
#define UWM_MOUSETOOLKEYUPHOOK                (WM_USER+1236)

extern "C" __declspec(dllexport) BOOL WINAPI setMTHook   (HWND hwnd) ;
extern "C" __declspec(dllexport) BOOL WINAPI unsetMTHook (HWND hwnd) ;
