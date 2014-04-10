/********************************************************************\
 * gnc-gui-query.h -- functions for creating dialogs for GnuCash    * 
 * Copyright (C) 1998, 1999, 2000 Linas Vepstas                     *
 *                                                                  *
 * This program is free software; you can redistribute it and/or    *
 * modify it under the terms of the GNU General Public License as   *
 * published by the Free Software Foundation; either version 2 of   *
 * the License, or (at your option) any later version.              *
 *                                                                  *
 * This program is distributed in the hope that it will be useful,  *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of   *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the    *
 * GNU General Public License for more details.                     *
 *                                                                  *
 * You should have received a copy of the GNU General Public License*
 * along with this program; if not, contact:                        *
 *                                                                  *
 * Free Software Foundation           Voice:  +1-617-542-5942       *
 * 59 Temple Place - Suite 330        Fax:    +1-617-542-2652       *
 * Boston, MA  02111-1307,  USA       gnu@gnu.org                   *
\********************************************************************/

#ifndef QUERY_USER_H
#define QUERY_USER_H

extern void
gnc_info_dialog(GtkWidget *parent,
		const char *format, ...) G_GNUC_PRINTF (2, 3);


extern void
gnc_warning_dialog_va(const char *format, va_list args);


extern void
gnc_error_dialog_va(const char *format, va_list args);

extern void
gnc_error_dialog(GtkWidget *parent,
		 const char *format, ...) G_GNUC_PRINTF (2, 3);

extern int
gnc_generic_question_dialog(GtkWidget *parent, const char **buttons,
			    const char *format, ...) G_GNUC_PRINTF (3, 4);

extern int
gnc_generic_warning_dialog(GtkWidget *parent, const char **buttons,
			   const char *format, ...) G_GNUC_PRINTF (3, 4);

#endif