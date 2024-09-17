/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ppoint.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 08:31:07 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/09/17 14:06:23 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Plane.h"

void	*paccess(t_point p)
{
	int	x;
	int	y;

	x = fixed_to_int(p.x) - p.plane->xmin;
	y = fixed_to_int(p.y) - p.plane->ymin;
	if (x < 0 || x >= p.plane->width || y < 0 || y >= p.plane->heigth)
		return (NULL);
	return (p.plane->grid[x][y]);
}

t_fixed	distance(t_point a, t_point b)
{
	t_fixed	x;
	t_fixed	y;
	t_fixed	ret;

	x = a.x - b.x;
	y = a.y - b.y;
	ret = f_sqrt(f_pow(x, 2) + f_pow(y, 2));
	return (ret);
}
