CC	=	gcc
CFLAGS	= -Wall -Werror -Wextra -std=c11 -pedantic
LIB_CALC_NAME = calculate.a
LIB_NOT_NAME = notation.a

INC:=$(shell find . -maxdepth 1 -name "*.h")
SRC:=$(shell find . -maxdepth 1 -name "*.c")
OBJS_CALC:=$(SRC:from_notation/%.c=%.o)

all: $(LIB_CALC_NAME)

$(OBJS_CALC): %.o:%.c from_notation/$(SRC) from_notation/$(INC)
	$(CC) $(CFLAGS) -o $@ -c $< -g

$(LIB_CALC_NAME): 	$(OBJS_CALC)
	ar	-vrcs	$(LIB_CALC_NAME)	$(OBJS_CALC)
	ranlib	$(LIB_NLIB_CALC_NAME)

clean:
	rm	-rf	*.o	*.out *.gcno *.gcna	*.html *.gcda *.css	*.exe
	rm	-rf	*.a $(TST)$(TFILE) *.txt

rebuild:	clean	$(LIB_NAME)
