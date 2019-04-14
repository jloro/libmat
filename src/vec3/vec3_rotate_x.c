/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_rotate_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 14:17:12 by jules             #+#    #+#             */
/*   Updated: 2019/04/14 14:42:11 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"
#include <math.h>

t_vec3		*vec3_rotate_x(t_vec3 *a, const float theta)
{
	a->y = cos(theta) * a->y - sin(theta) * a->z;
	a->z = sin(theta) * a->y + cos(theta) * a->z;
	return (a);
}
