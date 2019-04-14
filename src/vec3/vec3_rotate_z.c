/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_rotate_z.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 14:17:32 by jules             #+#    #+#             */
/*   Updated: 2019/04/14 14:42:21 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"
#include <math.h>

t_vec3		*vec3_rotate_z(t_vec3 *a, const float theta)
{
	a->x = cos(theta) * a->x - sin(theta) * a->y;
	a->y = sin(theta) * a->x + cos(theta) * a->y;
	return (a);
}
