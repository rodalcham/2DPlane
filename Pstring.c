/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pstring.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:57:54 by rchavez           #+#    #+#             */
/*   Updated: 2024/09/11 10:01:17 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Plane.h"

static size_t	ft_strlen(char *str)
{
	size_t	ret;

	if (!str)
		return (0);
	ret = 0;
	while (*str)
	{
		ret++;
		str++;
	}
	return (ret);
}

size_t	maxlen(char **arr)
{
	size_t	ret;
	size_t	temp;
	int		i;

	ret = 0;
	i = 0;
	if (!arr)
		return (0);
	while (arr[i])
	{
		temp = ft_strlen(arr[i]);
		if (temp > ret)
			ret = temp;
		i++;
	}
	return (ret);
}
