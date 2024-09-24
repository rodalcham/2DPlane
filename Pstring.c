/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pstring.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez@student.42heilbronn.de <rchavez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:57:54 by rchavez           #+#    #+#             */
/*   Updated: 2024/09/24 10:46:22 by rchavez@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Plane.h"

// static size_t	ft_strlen(char *str)
// {
// 	size_t	ret;

// 	if (!str)
// 		return (0);
// 	ret = 0;
// 	while (*str)
// 	{
// 		ret++;
// 		str++;
// 	}
// 	return (ret);
// }

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

int	strnum(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}
