/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_transpose.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:35:52 by jloro             #+#    #+#             */
/*   Updated: 2019/04/15 16:45:47 by jloro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"

t_mat4		mat4_transpose(t_mat4 *a)
{
	t_mat4	new;
	int		i;
	int		j;

	new = mat4_set(1.0f, 1);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			new.m[i * 4 + j] = a->m[j * 4 + i];
			j++;
		}
		i++;
	}
	*a = new;
	return (*a);
}