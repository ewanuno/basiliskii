/*
 *  util_windows.h - Miscellaneous utilities for Win32
 *
 *  Basilisk II (C) 1997-2004 Christian Bauer
 *
 *  Windows platform specific code copyright (C) Lauri Pesonen
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _UTIL_WINDOWS_H
#define _UTIL_WINDOWS_H

BOOL exists( const char *path );
int32 get_file_size( const char *path );
BOOL create_file( const char *path, DWORD size );

extern HANDLE create_thread(LPTHREAD_START_ROUTINE start_routine, void *arg = NULL);
extern void wait_thread(HANDLE thread);
extern void kill_thread(HANDLE thread);

#endif // _UTIL_WINDOWS_H
