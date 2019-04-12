/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_scale.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 12:54:21 by jloro             #+#    #+#             */
/*   Updated: 2019/04/12 12:56:10 by jloro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"

t_mat4		ft_mat4_scale(t_mat4 a, const float x, const float y,
				const float z)
{
	a.m[0] = x;
	a.m[5] = y;
	a.m[10] = z;
	return (a);
}