/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Plane.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez@student.42heilbronn.de <rchavez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:34:56 by rchavez           #+#    #+#             */
/*   Updated: 2024/09/13 16:38:07 by rchavez@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLANE_H
# define PLANE_H

# include <unistd.h>
# include <stdlib.h>
# include "Fixed.h"

typedef struct plane_s
{
	void	***grid;
	int		width;
	int		heigth;
	int		xmin;
	int		ymin;
}			t_plane;

typedef struct point_s
{
	t_fixed	x;
	t_fixed	y;
	t_plane	*plane;
}			t_point;

typedef struct ray_s
{
	t_point	*src;
	t_fixed	angle;
}			t_ray;

size_t	maxlen(char **arr);
int		strnum(char **arr);
t_plane	*build_plane(char **arr, int xmin, int ymin);
void	destroy_plane(t_plane *plane);
void	*paccess(t_point p);
t_point	from_x(t_ray r, t_fixed xdelta);
t_point	from_y(t_ray r, t_fixed ydelta);
t_point	from_h(t_ray r, t_fixed hdelta);
t_fixed	distance(t_point a, t_point b);

#endif