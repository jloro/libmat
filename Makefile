CC = gcc
FLAGS = -Wall -Wextra -Werror

NAME = libmat.a
SRC_FILES = radtodeg.c \
			degtorad.c \
			ft_vec4_set.c \
			ft_vec4_add.c \
			ft_vec4_addf.c \
			ft_vec4_sub.c \
			ft_vec4_subf.c \
			ft_vec4_mulf.c \
			ft_vec4_rotate_x.c \
			ft_vec4_rotate_y.c \
			ft_vec4_rotate_z.c \
			ft_mat4_set.c \
			ft_mat4_add.c \
			ft_mat4_addf.c \
			ft_mat4_sub.c \
			ft_mat4_subf.c \
			ft_mat4_mul.c \
			ft_mat4_mulf.c \
			ft_mat4_mulvec4.c \
			ft_mat4_trans.c \
			ft_mat4_scale.c \


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
	@mkdir -p $(OBJ_PATH)
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
