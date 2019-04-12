/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   degToRad.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 10:56:10 by jloro             #+#    #+#             */
/*   Updated: 2019/04/12 11:26:49 by jloro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"
#include <math.h>

float	degtorad(float deg)
{
	return (deg * (M_PI / 180.0f));
}
