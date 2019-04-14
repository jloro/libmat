/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_rotate_y.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 10:51:50 by jloro             #+#    #+#             */
/*   Updated: 2019/04/14 14:41:56 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"
#include <math.h>

t_vec4		*vec4_rotate_y(t_vec4 *a, const float theta)
{
	a->x = cos(theta) * a->x + sin(theta) * a->z;
	a->z = -sin(theta) * a->x + cos(theta) * a->z;
	return (a);
}
