/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Plane.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez@student.42heilbronn.de <rchavez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:39:47 by rchavez           #+#    #+#             */
/*   Updated: 2024/09/24 10:43:11 by rchavez@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Plane.h"

t_plane	*build_plane(char **arr, int xmin, int ymin)
{
	t_plane	*plane;
	int		i;
	int		j;

	plane = (t_plane *)malloc_t(sizeof(t_plane));
	if (!plane)
		return (destroy_plane(plane), NULL);
	plane->heigth = strnum(arr);
	plane->width = maxlen(arr);
	plane->xmin = xmin;
	plane->ymin = ymin;
	plane->grid = (void ***)malloc_t(sizeof(void **) * plane->width);
	if (!plane->grid)
		return (destroy_plane(plane), NULL);
	i = -1;
	while (++i < plane->width)
	{
		j = -1;
		plane->grid[i] = (void **)malloc_t(sizeof(void *) * plane->heigth);
		if (!plane->grid[i])
			return (destroy_plane(plane), NULL);
		while (++j < plane->heigth)
			plane->grid[i][j] = NULL;
	}
	return (plane);
}

void	destroy_plane(t_plane *plane)
{
	int	x;

	x = 0;
	if (!plane)
		return ;
	if (!plane->grid)
	{
		free_t(plane);
		return ;
	}
	while (x < plane->width)
	{
		if (plane->grid[x])
			free_t(plane->grid[x]);
		else
			break ;
		x++;
	}
	free_t(plane->grid);
	free_t(plane);
}
