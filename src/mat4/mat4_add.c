/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 13:52:49 by jules             #+#    #+#             */
/*   Updated: 2019/04/14 13:54:43 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"

t_mat4		mat4_add(const t_mat4 a, const t_mat4 b)
{
	t_mat4	ret;
	int		i;

	i = 0;
	while (i < 16)
	{
		ret.m[i] = a.m[i] + b.m[i];
		i++;
	}
	return (ret);
}
