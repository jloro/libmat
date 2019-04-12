/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_trans.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 12:42:08 by jloro             #+#    #+#             */
/*   Updated: 2019/04/12 15:24:21 by jloro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"

t_mat4		ft_mat4_trans(t_mat4 a, const float x, const float y,
				const float z)
{
	t_mat4	ret;

	ret = ft_mat4_set(1.0f, 1);
	ret.m[3] = x;
	ret.m[7] = y;
	ret.m[11] = z;
	ret = ft_mat4_mul(ret, a);
	return (ret);
}
