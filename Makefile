CC					= 	gcc
CXX					= 	g++
CFLAGS				=	-std=c11 -Wall -Wextra #-fsanitize=address -g #-Werror
CXXFLAGS			=	-std=c++17
GCOV_FLAGS			=	-fprofile-arcs -ftest-coverage
QMAKEFILE			=	RealMakefile

TARGET_DIR			=	.
CALCULATOR_DIR 		= 	./backend
OBJ_DIR				=	./objs

SRC_C 				:=	$(shell find $(CALCULATOR_DIR) -maxdepth 1 -name "*.c")
TEST_SRC	 		:=	$(shell find $(TEST_DIR) -maxdepth 1 -name "*.c")
OBJ_C 				=	$(addprefix $(OBJ_DIR)/, $(notdir $(SRC_C:.c=.o)))

INCLUDES			=	$(shell find . -maxdepth 1 -name "*.h")

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
	/opt/homebrew/opt/qt/bin/qmake realsmartcalc.pro -o RealMakefile

dvi:
	latex -output-directory=./docs ./docs/docs.tex ./docs/brief.dvi
	pdflatex -output-directory=./docs ./docs/docs.tex ./docs/brief.pdf

.PHONY: test run clean dist open gcov_report all