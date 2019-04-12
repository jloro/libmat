/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotatevec4x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 10:46:19 by jloro             #+#    #+#             */
/*   Updated: 2019/04/12 12:22:46 by jloro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"
#include <math.h>

t_vec4		ft_vec4_rotate_x(t_vec4 *a, const float theta)
{
	a->y = cos(theta) * a->y - sin(theta) * a->z;
	a->z = sin(theta) * a->y + cos(theta) * a->z;
	return (*a);
}
