/**
 * @file sipe-ft-lync.h
 *
 * pidgin-sipe
 *
 * Copyright (C) 2014-2015 SIPE Project <http://sipe.sourceforge.net/>
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
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/* Forward declarations */
struct sipe_core_private;
struct sipmsg;

struct sipe_file_transfer *
sipe_file_transfer_lync_new_outgoing(struct sipe_core_private *sipe_private);

void process_incoming_invite_ft_lync(struct sipe_core_private *sipe_private,
				     struct sipmsg *msg);

void process_incoming_info_ft_lync(struct sipe_core_private *sipe_private,
				   struct sipmsg *msg);
