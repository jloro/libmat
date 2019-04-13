/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 11:25:02 by jloro             #+#    #+#             */
/*   Updated: 2019/04/13 16:53:05 by jloro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBMAT_H
# define LIBMAT_H

# define X_AXIS 0
# define Y_AXIS 1
# define Z_AXIS 2

typedef struct		s_vec4
{
	float			x;
	float			y;
	float			z;
	float			w;
}					t_vec4;

typedef struct		s_vec3
{
	float			x;
	float			y;
	float			z;
}					t_vec3;

typedef struct		s_mat4
{
	float			m[16];
}					t_mat4;

float				radtodeg(float rad);
float				degtorad(float deg);

/*
** Vectors
*/

t_vec4				ft_vec4_set(const float x, const float y, const float z,
						const float w);
t_vec4				ft_vec4_add(const t_vec4 a, const t_vec4 b);
t_vec4				ft_vec4_addf(const t_vec4 a, const float b);
t_vec4				ft_vec4_sub(const t_vec4 a, const t_vec4 b);
t_vec4				ft_vec4_subf(const t_vec4 a, const float b);
t_vec4				ft_vec4_mulf(const t_vec4 a, const float b);
t_vec4				ft_vec4_rotate_x(t_vec4 *a, const float theta);
t_vec4				ft_vec4_rotate_y(t_vec4 *a, const float theta);
t_vec4				ft_vec4_rotate_z(t_vec4 *a, const float theta);


t_vec3				ft_vec3_set(const float x, const float y, const float z);

/*
** Matrix
*/

t_mat4				ft_mat4_set(float a, int identity);
t_mat4				ft_mat4_add(const t_mat4 a, const t_mat4 b);
t_mat4				ft_mat4_addf(const t_mat4 a, const float b);
t_mat4				ft_mat4_sub(const t_mat4 a, const t_mat4 b);
t_mat4				ft_mat4_subf(const t_mat4 a, const float b);
t_mat4				ft_mat4_mul(const t_mat4 a, const t_mat4 b);
t_mat4				ft_mat4_mulf(const t_mat4 a, const float b);
t_mat4				ft_mat4_trans(t_mat4 a, const float x, const float y,
						const float z);
t_mat4				ft_mat4_scale(t_mat4 a, const float x, const float y,
						const float z);
t_mat4				ft_mat4_rot(t_mat4 a, const float angle, const t_vec3 axis);


t_vec4				ft_mat4_mulvec4(const t_mat4 a, const t_vec4 b);
#endif
