/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pstring.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:57:54 by rchavez           #+#    #+#             */
/*   Updated: 2024/09/09 15:59:50 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Plane.h"

size_t	ft_strlen(char *str)
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
