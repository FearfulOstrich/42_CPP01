#==============================================================================#
#..............................................................................#
#...............................DECLARATIONS...................................#
#..............................................................................#
#==============================================================================#

## Compilation

NAME	=	sed

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

## Sources

SRCDIR	=	srcs/

SRCFILE	=	main.cpp sed.cpp read_file.cpp replace.cpp check_substrings.cpp\
			file_write.cpp

SRC		=	$(addprefix $(SRCDIR), $(SRCFILE))

## Includes

INCLDIR	=	includes/

## Objects

OBJDIR	=	objs/

OBJ		=	$(subst $(SRCDIR), $(OBJDIR), $(SRC:.cpp=.o))

#==============================================================================#
#..............................................................................#
#....................................RULES.....................................#
#..............................................................................#
#==============================================================================#

all			:	$(NAME)

$(NAME)		:	$(OBJ)
				$(CC) $(OBJ) -o $(NAME)

$(OBJDIR)%.o:	$(SRCDIR)%.cpp
				mkdir -p $(OBJDIR)
				$(CC) $(FLAGS) -c $< -o $@ -I $(INCLDIR)

clean		:
				rm -rf $(OBJ)

fclean		:	clean
				rm -rf $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re
