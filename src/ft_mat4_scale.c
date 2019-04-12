/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_scale.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 12:54:21 by jloro             #+#    #+#             */
/*   Updated: 2019/04/12 14:34:20 by jloro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"

t_mat4		ft_mat4_scale(t_mat4 a, const float x, const float y,
				const float z)
{
	t_mat4	ret;

	ret = ft_mat4_set(1.0f, 1);
	ret.m[0] = x;
	ret.m[5] = y;
	ret.m[10] = z;
	ret = ft_mat4_mul(ret, a);
	return (ret);
}
