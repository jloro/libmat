CC = gcc
FLAGS = -Wall -Wextra -Werror

NAME = libmat.a
SRC_FILES += 	utils/radtodeg.c \
		utils/degtorad.c \

SRC_FILES +=	vec3/vec3_set.c \
		vec3/vec3_add.c \
		vec3/vec3_addf.c \
		vec3/vec3_sub.c \
		vec3/vec3_subf.c \
		vec3/vec3_mulf.c \
		vec3/vec3_dot_product.c \
		vec3/vec3_cross_product.c \
		vec3/vec3_norm.c \
		vec3/vec3_normalize.c \
		vec3/vec3_rotate_x.c \
		vec3/vec3_rotate_y.c \
		vec3/vec3_rotate_z.c \
		vec3/vec3_neg.c \

SRC_FILES += 	vec4/vec4_set.c \
		vec4/vec4_add.c \
		vec4/vec4_addf.c \
		vec4/vec4_sub.c \
		vec4/vec4_subf.c \
		vec4/vec4_mulf.c \
		vec4/vec4_rotate_x.c \
		vec4/vec4_rotate_y.c \
		vec4/vec4_rotate_z.c \

SRC_FILES += 	mat4/mat4_set.c \
		mat4/mat4_add.c \
		mat4/mat4_addf.c \
		mat4/mat4_sub.c \
		mat4/mat4_subf.c \
		mat4/mat4_mul.c \
		mat4/mat4_mulf.c \
		mat4/mat4_mulvec4.c \
		mat4/mat4_trans.c \
		mat4/mat4_scale.c \
		mat4/mat4_rot.c \
		mat4/mat4_look_at.c \
		mat4/mat4_transpose.c \


OBJ_FILES = $(SRC_FILES:.c=.o)

SRC_PATH = ./src/
OBJ_PATH = ./obj/
INC_PATH = ./inc/

SRCS = $(addprefix $(SRC_PATH),$(SRC_FILES))
OBJS = $(addprefix $(OBJ_PATH),$(OBJ_FILES))
INCS = -I $(INC_PATH)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "$(NAME) compiled ✓"

$(OBJ_PATH)%.o : $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH) $(OBJ_PATH)utils $(OBJ_PATH)vec3 $(OBJ_PATH)vec4 $(OBJ_PATH)mat4
	@$(CC) $(FLAGS) $(INCS) -o $@ -c $<
	@echo "$@ created ✓"

clean :
	@/bin/rm -rf $(OBJ_PATH)
	@echo "Objects cleaned ✓"

fclean : clean
	@/bin/rm -f $(NAME)
	@echo "$(NAME) deleted ✓"
re : 
	$(MAKE) fclean
	$(MAKE) all
