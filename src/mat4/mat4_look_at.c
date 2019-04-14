/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_look_at.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:12:46 by jules             #+#    #+#             */
/*   Updated: 2019/04/14 15:53:07 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmat.h"

void            init_cam(t_mat4 *cam, const t_vec3 up,const t_vec3 target,
                    const t_vec3 pos)
{
    t_vec3      cameraUp;
    t_vec3      cameraRight;
    t_vec3      cameraDir;

    cameraDir = vec3_normalize(vec3_sub(pos, target));
    cameraRight = vec3_normalize(vec3_cross_product(up, cameraDir));
    cameraUp = vec3_normalize(vec3_cross_product(cameraDir, cameraRight));
    cam->m[0] = cameraRight.x;
    cam->m[1] = cameraRight.y;
    cam->m[2] = cameraRight.z;
    cam->m[4] = cameraUp.x;
    cam->m[5] = cameraUp.y;
    cam->m[6] = cameraUp.z;
    cam->m[8] = cameraDir.x;
    cam->m[9] = cameraDir.y;
    cam->m[10] = cameraDir.z;

}

void            init_pos(t_mat4 *matPos, const t_vec3 pos)
{
    matPos->m[3] = -pos.x;
    matPos->m[7] = -pos.y;
    matPos->m[9] = -pos.z;

}

t_mat4          mat4_look_at(const t_vec3 up,const t_vec3 target,
                    const t_vec3 pos)
{
    t_mat4      matPos;
    t_mat4      cam;

    matPos = mat4_set(1.0f, 1);
    cam = mat4_set(1.0f, 1);
    init_cam(&cam, up, target, pos); 
    init_pos(&matPos, pos);
    return (mat4_mul(cam, matPos));
}
