/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez@student.42heilbronn.de <rchavez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:23:41 by rchavez           #+#    #+#             */
/*   Updated: 2024/09/11 09:04:27 by rchavez@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <stdint.h>
# include <math.h>

# define POINT 16
# define SCALE 65536
# define INTMAX 2147483647

# define Q1 0
# define Q2 100
# define Q3 200
# define Q4 300
# define Q5 400

# define PI 3.14159265358979323846

typedef int64_t	t_fixed;

t_fixed	f_pow(t_fixed a, int b);
t_fixed	f_mult(t_fixed a, t_fixed b);
t_fixed	f_div(t_fixed a, t_fixed b);
t_fixed	int_to_fixed(int n);
t_fixed	float_to_fixed(float f);
t_fixed	double_to_fixed(double d);
t_fixed	f_sqrt(t_fixed a);
t_fixed	f_sin(t_fixed d);
t_fixed	f_cos(t_fixed d);
t_fixed	f_tan(t_fixed d);
int		fixed_to_int(t_fixed n);
float	fixed_to_float(t_fixed f);
double	fixed_to_double(t_fixed d);

#endif