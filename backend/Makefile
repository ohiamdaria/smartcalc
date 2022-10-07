CC          := gcc
WARNINGS    := -Wall -Werror -Wextra 
CFLAGS      := -std=c11 -pedantic $(WARNINGS)
INC_CHECK   ?= $(shell pkg-config --cflags check)
LFLAGS      ?= $(shell pkg-config --cflags --libs check) 
TEST_FLAGS  := --coverage -c -g

OBJ_DIR     := obj
TEST_SRC_DIR:= tests_src
TEST_OBJ_DIR:= tests_obj
GCOV_OBJ_DIR:= gcov_res

TEST_SRC  := $(shell find $(TEST_SRC_DIR) -maxdepth 1 -name "*.c")
CALC_SRC  := $(wildcard s21*.c)

TEST_OBJ  := $(addprefix $(TEST_OBJ_DIR)/, $(notdir $(TEST_SRC:.c=.o)))
CALC_OBJ  := $(addprefix $(OBJ_DIR)/, $(patsubst %.c, %.o, $(CALC_SRC)))
GCOV_OBJ  := $(addprefix $(GCOV_OBJ_DIR)/, $(patsubst %.c, %.o, $(CALC_SRC)))

CALC_TEST := calc_tests.c
CALC_LIB	:= s21_cmartcalc.a

all: $(CALC_LIB) 

test: $(CALC_LIB) $(TEST_OBJ_DIR)/main.o $(TEST_OBJ)
	$(CC) $(LFLAGS) $(TEST_OBJ_DIR)/main.o $(CALC_LIB) -o test
	- ./test

$(CALC_LIB): $(CALC_OBJ)
	ar rc $(CALC_LIB) $(CALC_OBJ)
	ranlib 	$(CALC_LIB)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $^ -o $@

$(TEST_OBJ_DIR)/main.o: $(CALC_TEST) 
	@mkdir -p $(TEST_OBJ_DIR)
	$(CC)  $(INC_CHECK) -c -o $(TEST_OBJ_DIR)/main.o $(CALC_TEST)

$(TEST_OBJ_DIR)/%.o: $(TEST_SRC_DIR)/%.c
	@mkdir -p $(TEST_OBJ_DIR)
	$(CC) $(INC_CHECK) -c $^ -o $@


gcov_report: $(TEST_OBJ_DIR)/main.o $(GCOV_OBJ) $(CALC_SRC)
	ar rc $(CALC_LIB) $(GCOV_OBJ)
	ranlib 	$(CALC_LIB)
	$(CC) $(LFLAGS) --coverage $(TEST_OBJ) $(TEST_OBJ_DIR)/main.o $(CALC_LIB) -o test
	- ./test
	./../materials/lcov/bin/lcov -f -c --directory . -o ./coverage.info 
	./../materials/lcov/bin/genhtml coverage.info --output-directory=res
	#rm -f *.gcda *.gcov *.o *.gcno
	open res/index.html

$(GCOV_OBJ_DIR)/%.o: %.c
	@mkdir -p $(GCOV_OBJ_DIR)
	$(CC) $(CFLAGS) $(TEST_FLAGS) $^ -o $@


.PHONY: clean clean_lib clean_bin
clean:	clean_lib	clean_bin	
	rm -f *.gcda 
	rm -f *.gcov 
	rm -f *.gcno 
	rm -f coverage.info
	rm -f test

clean_lib:
	rm -f $(CALC_LIB)

clean_bin: 
	rm -f $(CALC_OBJ) 
	rm -f $(TEST_OBJ) 
	rm -f $(GCOV_OBJ) 

rebuild: clean clean_lib clean_bin all

# cpplint: ${CALC_SRC} ${TEST_SRC} *.h
# ifeq ("","$(wildcard ./CPPLINT.cfg)")
# 	@cp -f ../materials/linters/CPPLINT.cfg ./CPPLINT.cfg
# endif
# 	@!(python3 ../materials/linters/cpplint.py --extensions=c $^ | grep -q :)
# 	@rm -f CPPLINT.cfg
# 	@!(grep -r '<math.h>' s21*)
