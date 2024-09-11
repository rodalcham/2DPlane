/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fangle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez@student.42heilbronn.de <rchavez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:16:01 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/09/11 09:04:22 by rchavez@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

t_fixed	f_tan(t_fixed d)
{
	double	temp;

	temp = fixed_to_double(d);
	temp = temp * PI / Q3;
	return (double_to_fixed(tan(temp)));
}

t_fixed	f_sin(t_fixed d)
{
	double	temp;

	temp = fixed_to_double(d);
	temp = temp * PI / Q3;
	return (double_to_fixed(sin(temp)));
}

t_fixed	f_cos(t_fixed d)
{
	double	temp;

	temp = fixed_to_double(d);
	temp = temp * PI / Q3;
	return (double_to_fixed(cos(temp)));
}
