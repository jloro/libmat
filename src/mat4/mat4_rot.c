/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_rot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 13:52:23 by jloro             #+#    #+#             */
/*   Updated: 2019/04/14 13:55:23 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"
#include <math.h>
#include <string.h>

void		calc_rot(t_mat4 *a, const t_vec3 axis, const float * coef)
{
	a->m[0] = coef[2] * axis.x * axis.x + coef[0];
	a->m[1] = coef[2] * axis.x * axis.y - coef[1] * axis.z;
	a->m[2] = coef[2] * axis.x * axis.z + coef[1] * axis.y;
	a->m[4] = coef[2] * axis.x * axis.y + coef[1] * axis.z;
	a->m[5] = coef[2] * axis.y * axis.y + coef[0];
	a->m[6] = coef[2] * axis.y * axis.z - coef[1] * axis.x;
	a->m[8] = coef[2] * axis.x * axis.z - coef[1] * axis.y;
	a->m[9] = coef[2] * axis.y * axis.z + coef[1] * axis.x;
	a->m[10] = coef[2] * axis.z * axis.z + coef[0];
}

t_mat4		mat4_rot(t_mat4 a, const float angle, const t_vec3 axis)
{
	t_mat4	ret;
	float	coef[3];

	coef[0] = cos(angle);
	coef[1] = sin(angle);
	coef[2] = 1 - coef[0];
	ret = mat4_set(1.0f, 1);
	calc_rot(&ret, axis, coef);
	ret = mat4_mul(ret, a);
	return (ret);
}
