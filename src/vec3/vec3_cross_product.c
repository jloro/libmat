/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_cross_product.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 14:54:25 by jules             #+#    #+#             */
/*   Updated: 2019/04/14 14:56:30 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"

t_vec3		vec3_cross_product(const t_vec3 a, const t_vec3 b)
{
	t_vec3	ret;

	ret.x = a.y * b.z - a.z - b.y;
	ret.y = a.z * b.x - a.x * b.z;
	ret.z = a.x * a.y - a.y * a.x;
	return (ret);
}
