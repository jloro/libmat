/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_look_at.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:12:46 by jules             #+#    #+#             */
/*   Updated: 2019/04/16 15:25:08 by jloro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"

void			init_cam(t_mat4 *cam, const t_vec3 up,const t_vec3 target,
		const t_vec3 pos)
{
	t_vec3		cameraUp;
	t_vec3		cameraRight;
	t_vec3		cameraDir;

	cameraDir = vec3_normalize(vec3_sub(pos, target));
	cameraRight = vec3_normalize(vec3_cross_product(up, cameraDir));
	cameraUp = vec3_normalize(vec3_cross_product(cameraDir, cameraRight));
	cam->m[0] = cameraRight.x;
	cam->m[1] = cameraUp.x;
	cam->m[2] = cameraDir.x;
	cam->m[4] = cameraRight.y;
	cam->m[5] = cameraUp.y;
	cam->m[6] = cameraDir.y;
	cam->m[8] = cameraRight.z;
	cam->m[9] = cameraUp.z;
	cam->m[10] = cameraDir.z;
	cam->m[12] = -vec3_dot_product(cameraRight, pos);
	cam->m[13] = -vec3_dot_product(cameraUp, pos);
	cam->m[14] = -vec3_dot_product(cameraDir, pos);
}

t_mat4			mat4_look_at(const t_vec3 up,const t_vec3 target,
		const t_vec3 pos)
{
	t_mat4		cam;

	cam = mat4_set(1.0f, 1);
	init_cam(&cam, up, target, pos);
	return (cam);
}
