/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_subf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 14:15:28 by jules             #+#    #+#             */
/*   Updated: 2019/04/14 14:16:03 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"

t_vec3		vec3_subf(const t_vec3 a, const float b)
{
	t_vec3	ret;

	ret.x = a.x - b;
	ret.y = a.y - b;
	ret.z = a.z - b;
	return (ret);
}
