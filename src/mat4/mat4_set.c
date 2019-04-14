/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 11:24:37 by jloro             #+#    #+#             */
/*   Updated: 2019/04/14 13:55:46 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"

t_mat4		mat4_set(float a, int identity)
{
	t_mat4	ret;
	int		i;

	i = 0;
	while (i < 16)
	{
		if (identity)
			ret.m[i] = i % 5 == 0 ? a : 0;
		else
			ret.m[i] = a;
		i++;
	}
	return (ret);
}