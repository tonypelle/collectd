/**
 * ECHO Header
 *
 * Copyright (C) 2001 Jeffrey Fulmer <jdfulmer@armstrong.com>
 * This file is part of LIBPING
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */
#ifndef  ECHO_H
#define  ECHO_H

typedef struct
{
  char     *hostname; 
  int      timeout;
  int      bytes;
  int      rtt;
} ECHODATA; 

int echohost( const char *hostname, int bytes );
 
int echothost( const char *hostname, int bytes, int t ); 

#endif/*ECHO_H*/
