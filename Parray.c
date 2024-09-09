/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parray.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:39:47 by rchavez           #+#    #+#             */
/*   Updated: 2024/09/09 15:57:46 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Plane.h"

t_plane	*array_to_plane(char **arr, int xmin, int ymin)
{
	int	**ret;

	ret = malloc(sizeof(int *) * (sizeof(arr) / sizeof(char *)));
	if (!ret)
		return (NULL);
}
