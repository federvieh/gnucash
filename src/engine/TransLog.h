/********************************************************************\
 * TransLog.h -- the transaction logger                             *
 * Copyright (C) 1998 Linas Vepstas                                 *
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
 * along with this program; if not, write to the Free Software      *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.        *
 *                                                                  *
\********************************************************************/

#ifndef __XACC_TRANS_LOG_H__
#define __XACC_TRANS_LOG_H__

#include "config.h"

#include "Account.h"
#include "Transaction.h"

void    xaccOpenLog (void);
void    xaccCloseLog (void);
void    xaccTransWriteLog (Transaction *, char);
void    xaccLogEnable (void);
void    xaccLogDisable (void);

/* The xaccLogSetBaseName() method sets the base filepath and the
 *    root part of the journal file name.  If the journal file is
 *    already open, it will close it and reopen it with the new
 *    base name.
 */
void    xaccLogSetBaseName (const char *);

#endif /* __XACC_TRANS_LOG_H__ */
