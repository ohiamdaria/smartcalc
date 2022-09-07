CC	=	gcc
CFLAGS	= -Wall -Werror -Wextra -std=c11 -pedantic
LIB_NAME = smartcalc.a

INC:=$(shell find . -maxdepth 1 -name "s21*.h")
SRC:=$(shell find . -maxdepth 1 -name "s21*.c")
OBJS:=$(SRC:%.c=%.o)

all: $(LIB_NAME)

$(OBJS): %.o:%.c $(SRC) $(INC)
	$(CC) $(CFLAGS) -o $@ -c $< -g

$(LIB_NAME): 	$(OBJS)
	ar	-vrcs	$(LIB_NAME)	$(OBJS)
	ranlib	$(LIB_NAME)

clean:
	rm	-rf	*.o	*.out *.gcno *.gcna	*.html *.gcda *.css	*.exe
	rm	-rf	*.a $(TST)$(TFILE) *.txt

rebuild:	clean	$(LIB_NAME)
