/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Plane.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:39:47 by rchavez           #+#    #+#             */
/*   Updated: 2024/09/11 15:38:15 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Plane.h"

t_plane	*build_plane(char **arr, int xmin, int ymin)
{
	t_plane	*plane;
	int		i;
	int		j;

	plane = (t_plane *)malloc(sizeof(t_plane));
	if (!plane)
		return (destroy_plane(plane), NULL);
	plane->heigth = (sizeof(arr) / sizeof(char *)) - 1;
	plane->width = maxlen(arr);
	plane->xmin = xmin;
	plane->ymin = ymin;
	plane->grid = (void ***)malloc(sizeof(void **) * plane->width);
	if (!plane->grid)
		return (destroy_plane(plane), NULL);
	i = -1;
	while (++i < plane->width)
	{
		j = -1;
		plane->grid[i] = (void **)malloc(sizeof(void *) * plane->heigth);
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
		free(plane);
		return ;
	}
	while (x < plane->width)
	{
		if (plane->grid[x])
			free(plane->grid[x]);
		else
			break ;
		x++;
	}
	free(plane->grid);
	free(plane);
}
