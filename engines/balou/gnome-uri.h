/*
 * Copyright (C) 1997, 1998, 1999, 2000 Free Software Foundation
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#ifndef __GNOME_URI_H__
#define __GNOME_URI_H__

#include <glib.h>

void gnome_uri_list_free_strings (GList *list);
GList *gnome_uri_list_extract_uris (const gchar *uri_list);
GList *gnome_uri_list_extract_filenames (const gchar *uri_list);

#endif /* !__GNOME_URI_H__ */
