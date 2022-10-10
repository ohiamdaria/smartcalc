CC					= 	gcc
CXX					= 	g++
TEST_TARGET			=	test
TEST_GCOV_EXE		=	test_gcov
GCOV_TARGET			=	./coverage
GCOV_INFO			=	coverage.info
CFLAGS				=	-std=c11 -Wall -Wextra #-fsanitize=address -g #-Werror
CXXFLAGS			=	-std=c++17
GCOV_FLAGS			=	-fprofile-arcs -ftest-coverage
TEST_LIBS			=	-lcheck
QMAKEFILE			=	RealMakefile

TARGET_DIR			=	.
TEST_DIR			=	./tests
CALCULATOR_DIR 		= 	./backend
OBJ_DIR				=	./objs
GCOV_OBJ_DIR		=	./gcov_objs

SRC_C 				:=	$(shell find $(CALCULATOR_DIR) -maxdepth 1 -name "*.c")
TEST_SRC	 		:=	$(shell find $(TEST_DIR) -maxdepth 1 -name "*.c")

OBJ_C 				=	$(addprefix $(OBJ_DIR)/, $(notdir $(SRC_C:.c=.o)))
GCOV_OBJ_C			=	$(addprefix $(GCOV_OBJ_DIR)/, $(notdir $(SRC_C:.c=.o)))
TEST_OBJ			=	$(addprefix $(OBJ_DIR)/, $(notdir $(TEST_SRC:.c=.o)))
GCOV_TEST_OBJ		= 	$(addprefix $(GCOV_OBJ_DIR)/, $(notdir $(TEST_SRC:.c=.o)))

INCLUDES			=	$(shell find . -maxdepth 1 -name "*.h")
TEST_INCLUDES		=	$(shell find $(TEST_DIR) -name "*.h")

RM					=	rm -f
MK					=	mkdir -p
COPY_FILE     		=	cp -f

.DEFAULT_GOAL := all

all: $(OBJ_DIR)
	$(MAKE) -f $(QMAKEFILE)

%: $(OBJ_DIR)
	@$(MAKE) -f $(QMAKEFILE) $@

$(OBJ_DIR)			:
	$(MK) $(OBJ_DIR)

clean				:
	$(MAKE) -f $(QMAKEFILE) clean
	$(RM) -r $(OBJ_DIR)
	$(RM) moc_*
	$(RM) qrc_*
	$(RM) -r realsmartcalc.app
	$(RM) ui/ui_mainwindow.h
	$(RM) .qmake.stash

run:
	open realsmartcalc.app/Contents/MacOS/realsmartcalc

dist:
	cat $(QMAKEFILE) | sed 's/--parents/-p/g' > /tmp/`basename $(QMAKEFILE)`
	mv -f /tmp/`basename $(QMAKEFILE)` $(QMAKEFILE)
	$(MAKE) -f $(QMAKEFILE) dist

install:
	/opt/homebrew/opt/qt/bin/qmake -o RealMakefile realsmartcalc.pro

dvi:
	latex -output-directory=./docs ./docs/docs.tex ./docs/brief.dvi
	pdflatex -output-directory=./docs ./docs/docs.tex ./docs/brief.pdf

.PHONY: test run clean dist open gcov_report all