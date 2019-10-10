cmake_minimum_required(VERSION 3.0)

project(libmat)

set(SRCS_PATH src)
set(SRCS_UTILS_PATH "${SRCS_PATH}/utils")
set(SRCS_VEC3_PATH "${SRCS_PATH}/vec3")
set(SRCS_VEC4_PATH "${SRCS_PATH}/vec4")
set(SRCS_MAT4_PATH "${SRCS_PATH}/mat4")

set(SRCS_UTILS
	${SRCS_UTILS_PATH}/radtodeg.c
	${SRCS_UTILS_PATH}/degtorad.c
	${SRCS_UTILS_PATH}/minf.c
	${SRCS_UTILS_PATH}/maxf.c)

set(SRCS_VEC3
	${SRCS_VEC3_PATH}/vec3_set.c
	${SRCS_VEC3_PATH}/vec3_add.c
	${SRCS_VEC3_PATH}/vec3_addf.c
	${SRCS_VEC3_PATH}/vec3_sub.c
	${SRCS_VEC3_PATH}/vec3_subf.c
	${SRCS_VEC3_PATH}/vec3_mulf.c
	${SRCS_VEC3_PATH}/vec3_dot_product.c
	${SRCS_VEC3_PATH}/vec3_cross_product.c
	${SRCS_VEC3_PATH}/vec3_norm.c
	${SRCS_VEC3_PATH}/vec3_normalize.c
	${SRCS_VEC3_PATH}/vec3_rotate_x.c
	${SRCS_VEC3_PATH}/vec3_rotate_y.c
	${SRCS_VEC3_PATH}/vec3_rotate_z.c
	${SRCS_VEC3_PATH}/vec3_neg.c
	${SRCS_VEC3_PATH}/vec3_is_null.c)

set(SRCS_VEC4
	${SRCS_VEC4_PATH}/vec4_set.c
	${SRCS_VEC4_PATH}/vec4_add.c
	${SRCS_VEC4_PATH}/vec4_addf.c
	${SRCS_VEC4_PATH}/vec4_sub.c
	${SRCS_VEC4_PATH}/vec4_subf.c
	${SRCS_VEC4_PATH}/vec4_mulf.c
	${SRCS_VEC4_PATH}/vec4_rotate_x.c
	${SRCS_VEC4_PATH}/vec4_rotate_y.c
	${SRCS_VEC4_PATH}/vec4_rotate_z.c)

set(SRCS_MAT4
	${SRCS_MAT4_PATH}/mat4_set.c
	${SRCS_MAT4_PATH}/mat4_set.c
	${SRCS_MAT4_PATH}/mat4_add.c
	${SRCS_MAT4_PATH}/mat4_addf.c
	${SRCS_MAT4_PATH}/mat4_sub.c
	${SRCS_MAT4_PATH}/mat4_subf.c
	${SRCS_MAT4_PATH}/mat4_mul.c
	${SRCS_MAT4_PATH}/mat4_mulf.c
	${SRCS_MAT4_PATH}/mat4_mulvec4.c
	${SRCS_MAT4_PATH}/mat4_trans.c
	${SRCS_MAT4_PATH}/mat4_scale.c
	${SRCS_MAT4_PATH}/mat4_rot.c
	${SRCS_MAT4_PATH}/mat4_transpose.c
	${SRCS_MAT4_PATH}/mat4_cpy.c)

set(INCS inc/)

include_directories(inc/)

add_library(mat	${SRCS_UTILS} ${SRCS_VEC3} ${SRCS_VEC4} ${SRCS_MAT4} ${INCS})
