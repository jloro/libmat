/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jloro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 11:25:02 by jloro             #+#    #+#             */
/*   Updated: 2019/04/30 12:00:19 by jloro            ###   ########.fr       */
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

/*
** Utils
*/

float				radtodeg(const float rad);
float				degtorad(const float deg);
float				maxf(const float a, const float b);
float				minf(const float a, const float b);

/*
** Vec4
*/

t_vec4				vec4_set(const float x, const float y, const float z,
						const float w);
t_vec4				vec4_add(const t_vec4 a, const t_vec4 b);
t_vec4				vec4_addf(const t_vec4 a, const float b);
t_vec4				vec4_sub(const t_vec4 a, const t_vec4 b);
t_vec4				vec4_subf(const t_vec4 a, const float b);
t_vec4				vec4_mulf(const t_vec4 a, const float b);
t_vec4				*vec4_rotate_x(t_vec4 *a, const float theta);
t_vec4				*vec4_rotate_y(t_vec4 *a, const float theta);
t_vec4				*vec4_rotate_z(t_vec4 *a, const float theta);

/*
** Vec3
*/

t_vec3				vec3_set(const float x, const float y, const float z);
t_vec3				vec3_add(const t_vec3 a, const t_vec3 b);
t_vec3				vec3_addf(const t_vec3 a, const float b);
t_vec3				vec3_sub(const t_vec3 a, const t_vec3 b);
t_vec3				vec3_subf(const t_vec3 a, const float b);
t_vec3				vec3_mulf(const t_vec3 a, const float b);
t_vec3				*vec3_rotate_x(t_vec3 *a, const float theta);
t_vec3				*vec3_rotate_y(t_vec3 *a, const float theta);
t_vec3				*vec3_rotate_z(t_vec3 *a, const float theta);
float				vec3_dot_product(const t_vec3 a, const t_vec3 b);
float				vec3_norm(const t_vec3 a);
t_vec3				vec3_normalize(const t_vec3 a);
t_vec3				vec3_cross_product(const t_vec3 a, const t_vec3 b);
t_vec3				vec3_neg(t_vec3 *vec);
int					vec3_is_null(const t_vec3 vec);

/*
** Matrix
*/

t_mat4				mat4_set(float a, int identity);
t_mat4				mat4_add(const t_mat4 a, const t_mat4 b);
t_mat4				mat4_addf(const t_mat4 a, const float b);
t_mat4				mat4_sub(const t_mat4 a, const t_mat4 b);
t_mat4				mat4_subf(const t_mat4 a, const float b);
t_mat4				mat4_mul(const t_mat4 a, const t_mat4 b);
t_mat4				mat4_mulf(const t_mat4 a, const float b);
t_mat4				mat4_trans(t_mat4 a, const t_vec3 b);
t_mat4				mat4_scale(t_mat4 a, const t_vec3 b);
t_mat4				mat4_rot(t_mat4 a, const float angle, const t_vec3 axis);
t_mat4				mat4_transpose(t_mat4 *a);
t_mat4				mat4_cpy(const t_mat4 a);

t_vec4				mat4_mulvec4(const t_mat4 a, const t_vec4 b);
#endif
