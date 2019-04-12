/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_mulvec4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 12:23:22 by jloro             #+#    #+#             */
/*   Updated: 2019/04/12 12:45:04 by jloro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"

t_vec4		ft_mat4_mulvec4(const t_mat4 a, const t_vec4 b)
{
	t_vec4	ret;

	ret.x = a.m[0] * b.x + a.m[1] * b.y + a.m[2] * b.z + a.m[3] * b.w;
	ret.y = a.m[4] * b.x + a.m[5] * b.y + a.m[6] * b.z + a.m[7] * b.w;
	ret.z = a.m[8] * b.x + a.m[9] * b.y + a.m[10] * b.z + a.m[11] * b.w;
	ret.w = a.m[12] * b.x + a.m[13] * b.y + a.m[14] * b.z + a.m[15] * b.w;
	return (ret);
}
