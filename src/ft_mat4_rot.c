/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_rot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 13:52:23 by jloro             #+#    #+#             */
/*   Updated: 2019/04/12 14:23:25 by jloro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"
#include <math.h>
#include <string.h>

void		modif_ret(t_mat4 *a, int *i, const float angle)
{
	a->m[i[0]] = cos(angle);
	a->m[i[1]] = -sin(angle);
	a->m[i[2]] = sin(angle);
	a->m[i[3]] = cos(angle);
}

t_mat4		ft_mat4_rot(t_mat4 a, const float angle, const int axis)
{
	t_mat4	ret;
	int		index[4];

	ret = ft_mat4_set(1.0f, 1);
	if (axis == X_AXIS)
		modif_ret(&ret, memcpy(index, ((int[4]){5, 6, 9, 10}), 4 * sizeof(int)), angle);
	else if (axis == Z_AXIS)
		modif_ret(&ret, memcpy(index, ((int[4]){0, 1, 4, 5}), 4 * sizeof(int)), angle);
	else
		modif_ret(&ret, memcpy(index, ((int[4]){0, 2, 8, 10}), 4 * sizeof(int)), angle);
	ret = ft_mat4_mul(ret, a);
	return (ret);
}
