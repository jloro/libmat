/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_mul.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 11:45:14 by jloro             #+#    #+#             */
/*   Updated: 2019/04/12 12:15:39 by jloro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"

t_mat4		ft_mat4_mul(const t_mat4 a, const t_mat4 b)
{
	t_mat4	ret;
	int		i;

	i = 0;
	while (i < 16)
	{
		ret.m[i] = a.m[i / 4 * 4] * b.m[i % 4] + a.m[i / 4 * 4 + 1] * b.m[i % 4 + 4]
			+ a.m[i / 4 * 4 + 2] * b.m[i % 4 + 8] + a.m[i / 4 * 4 + 3] * b.m[i % 4 + 12];
		i++;
	}
	return (ret);
}
