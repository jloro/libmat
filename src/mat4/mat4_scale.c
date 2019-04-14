/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_scale.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 12:54:21 by jloro             #+#    #+#             */
/*   Updated: 2019/04/14 13:55:33 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"

t_mat4		mat4_scale(t_mat4 a, const float x, const float y,
				const float z)
{
	t_mat4	ret;

	ret = mat4_set(1.0f, 1);
	ret.m[0] = x;
	ret.m[5] = y;
	ret.m[10] = z;
	ret = mat4_mul(ret, a);
	return (ret);
}
