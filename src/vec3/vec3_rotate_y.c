/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_rotate_y.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 14:17:26 by jules             #+#    #+#             */
/*   Updated: 2019/04/14 14:42:17 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"
#include <math.h>

t_vec3		*vec3_rotate_y(t_vec3 *a, const float theta)
{
	a->x = cos(theta) * a->x + sin(theta) * a->z;
	a->z = -sin(theta) * a->x + cos(theta) * a->z;
	return (a);
}
