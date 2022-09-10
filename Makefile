CC	=	gcc
CFLAGS	= -Wall -Werror -Wextra -std=c11 -pedantic
LIB_NAME = calculate.a

INC:=$(shell find . -maxdepth 1 -name "*.h")
SRC:=$(shell find . -maxdepth 1 -name "*.c")
OBJS:=$(SRC:from_notation/%.c=%.o)

all: $(LIB_NAME)

$(OBJS): %.o:%.c from_notation/$(SRC) from_notation/$(INC)
	$(CC) $(CFLAGS) -o $@ -c $< -g

$(LIB_NAME): 	$(OBJS)
	ar	-vrcs	$(LIB_NAME)	$(OBJS)
	ranlib	$(LIB_NAME)

clean:
	rm	-rf	*.o	*.out *.gcno *.gcna	*.html *.gcda *.css	*.exe
	rm	-rf	*.a $(TST)$(TFILE) *.txt

rebuild:	clean	$(LIB_NAME)
