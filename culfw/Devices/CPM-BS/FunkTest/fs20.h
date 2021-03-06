/* vim:fdm=marker ts=4 et ai
 * {{{
 *
 *          fs20 sender implementation
 *
 * (c) by Alexander Neumann <alexander@bumpern.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
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
 * For more information on the GPL, please go to:
 * http://www.gnu.org/copyleft/gpl.html
 }}} */


#ifndef _FS20_H
#define _FS20_H

#define FS20_PINNUM PA7
#define FS20_DDR    DDRA
#define FS20_PORT   PORTA

/* public prototypes */
void fs20_init(void);
void fs20_send(void);
void Analyze_Task(void);
void fs20_send_adc( uint16_t adc );

#endif
