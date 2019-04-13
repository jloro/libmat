/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_set.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <jloro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 16:53:17 by jloro             #+#    #+#             */
/*   Updated: 2019/04/13 16:54:06 by jloro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"

t_vec3		ft_vec3_set(const float x, const float y, const float z)
{
	t_vec3	ret;

	ret.x = x;
	ret.y = y;
	ret.z = z;
	return (ret);
}
