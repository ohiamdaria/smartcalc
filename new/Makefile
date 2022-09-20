CC	=	gcc
CFLAGS	= -Wall -Werror -Wextra -std=c11 -pedantic
LIB_NAME = s21_smartcalc.a
LFLAGS = -lcheck -lm -lpthread
RFLAGS = -fprofile-arcs	-ftest-coverage
TST=tests/
TFILE=runtest

INC:=$(shell find . -maxdepth 1 -name "s21*.h")
SRC:=$(shell find . -maxdepth 1 -name "s21*.c")
OBJS:=$(SRC:%.c=%.o)

all: $(LIB_NAME)

$(OBJS): %.o:%.c $(SRC) $(INC)
	$(CC) $(CFLAGS) $(RFLAGS) -o $@ -c $< -g

$(LIB_NAME): 	$(OBJS)
	ar	-vrcs	$(LIB_NAME)	$(OBJS)
	ranlib	$(LIB_NAME)

test: $(LIB_NAME)
	$(CC)	$(CFLAGS)	-c	$(TST)*.c
	$(CC)   $(RFLAGS) *.o	$(LIB_NAME)	$(LFLAGS)	-o	$(TST)$(TFILE)
	$(TST)$(TFILE)

clean:
	rm	-rf	*.o	*.out *.gcno *.gcna	*.html *.gcda *.css	*.exe
	rm	-rf	*.a $(TST)$(TFILE) *.txt
