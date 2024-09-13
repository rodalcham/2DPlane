/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pray.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez@student.42heilbronn.de <rchavez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 08:30:07 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/09/13 14:15:01 by rchavez@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Plane.h"

t_point	from_x(t_ray r, t_fixed xdelta)
{
	t_point	ret;
	t_fixed	xsign;
	t_fixed	ysign;

	if (r.angle > int_to_fixed(Q1) && r.angle < int_to_fixed(Q3))
		ysign = int_to_fixed(1);
	else if (r.angle == int_to_fixed(Q1) || r.angle == int_to_fixed(Q3))
		ysign = int_to_fixed(0);
	else
		ysign = int_to_fixed(-1);
	if ((r. angle >= int_to_fixed(Q1) && r.angle < int_to_fixed(Q2))
		|| (r.angle > int_to_fixed(Q4) && r. angle <= int_to_fixed(Q5)))
		xsign = int_to_fixed(1);
	else if (r.angle == int_to_fixed(Q2) || r.angle == int_to_fixed(Q4))
		xsign = int_to_fixed(0);
	else
		xsign = int_to_fixed(-1);
	ret.plane = r.src->plane;
	ret.x = r.src->x + f_mult(xdelta, xsign);
	if (ysign)
		ret.y = r.src->y + f_mult(f_tan(r.angle), xdelta);
	else
		ret.y = r.src->y;
	return (ret);
}

t_point	from_y(t_ray r, t_fixed ydelta)
{
	t_point	ret;
	t_fixed	xsign;
	t_fixed	ysign;

	if (r.angle > int_to_fixed(Q1) && r.angle < int_to_fixed(Q3))
		ysign = int_to_fixed(1);
	else if (r.angle == int_to_fixed(Q1) || r.angle == int_to_fixed(Q3))
		ysign = int_to_fixed(0);
	else
		ysign = int_to_fixed(-1);
	if ((r. angle >= int_to_fixed(Q1) && r.angle < int_to_fixed(Q2))
		|| (r.angle > int_to_fixed(Q4) && r. angle <= int_to_fixed(Q5)))
		xsign = int_to_fixed(1);
	else if (r.angle == int_to_fixed(Q2) || r.angle == int_to_fixed(Q4))
		xsign = int_to_fixed(0);
	else
		xsign = int_to_fixed(-1);
	ret.plane = r.src->plane;
	ret.y = r.src->y + f_mult(ydelta, ysign);
	if (xsign)
		ret.x = r.src->x + f_div(ydelta, f_tan(r.angle));
	else
		ret.x = r.src->x;
	return (ret);
}

t_point	from_h(t_ray r, t_fixed hdelta)
{
	t_fixed	xsign;
	t_fixed	ysign;
	t_point	ret;

	ret.plane = r.src->plane;
	if (r.angle > int_to_fixed(Q1) && r.angle < int_to_fixed(Q3))
		ysign = int_to_fixed(1);
	else if (r.angle == int_to_fixed(Q1) || r.angle == int_to_fixed(Q3))
		ysign = int_to_fixed(0);
	else
		ysign = int_to_fixed(-1);
	if ((r. angle >= int_to_fixed(Q1) && r.angle < int_to_fixed(Q2))
		|| (r.angle > int_to_fixed(Q4) && r. angle <= int_to_fixed(Q5)))
		xsign = int_to_fixed(1);
	else if (r.angle == int_to_fixed(Q2) || r.angle == int_to_fixed(Q4))
		xsign = int_to_fixed(0);
	else
		xsign = int_to_fixed(-1);
	ret.y = r.src->y;
	ret.x = r.src->x;
	if (ysign)
		ret.y += f_mult(hdelta, f_sin(r.angle));
	if (xsign)
		ret.x += f_mult(hdelta, f_cos(r.angle));
	return (ret);
}
