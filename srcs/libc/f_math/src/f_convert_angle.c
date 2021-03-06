/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_convert_angle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qperez <qperez42@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/21 23:36:28 by qperez            #+#    #+#             */
/*   Updated: 2015/07/03 16:25:43 by qperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** <This file contains f_convert_angle function>
** < uf_rad_to_deg, uf_deg_to_rad >
** Copyright (C) <2013>  Quentin Perez <qperez42@gmail.com>
** This file is part of 42-toolkit.
** 42-toolkit is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <f_math/d_math.h>
#include <f_math/f_convert.h>

double	uf_deg_to_rad(double deg)
{
	return (deg * D_PI / 180);
}

double	uf_rad_to_deg(double rad)
{
	return (rad * 180 / D_PI);
}
