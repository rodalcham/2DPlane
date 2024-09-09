/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Plane.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:34:56 by rchavez           #+#    #+#             */
/*   Updated: 2024/09/09 15:56:01 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLANE_H
# define PLANE_H

# include <unistd.h>
# include "Fixed.h"

typedef struct plane_s
{
	int	**plane;
	int	width;
	int	heigth;
	int	xmin;
	int	ymin;
}		t_plane;


#endif