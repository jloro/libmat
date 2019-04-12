/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotatevec4z.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 10:53:28 by jloro             #+#    #+#             */
/*   Updated: 2019/04/12 12:22:56 by jloro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"
#include <math.h>

t_vec4		ft_vec4_rotate_z(t_vec4 *a, const float theta)
{
	a->x = cos(theta) * a->x - sin(theta) * a->y;
	a->y = sin(theta) * a->x + cos(theta) * a->y;
	return (*a);
}
