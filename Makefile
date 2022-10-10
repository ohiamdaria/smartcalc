CC					= 	gcc
CXX					= 	g++
CFLAGS				=	-std=c11 -Wall -Wextra #-fsanitize=address -g #-Werror
CXXFLAGS			=	-std=c++17
QMAKEFILE			=	RealMakefile
RM					=	rm -f
MK					=	mkdir -p
APP = build/s21_realsmartcalc.app

.DEFAULT_GOAL := all

all: clean install run

clean				:
	$(RM) -rf build
	$(RM) -rf $(HOME)/Desktop/SmartCalc_v1.0

run:
	open $(HOME)/Desktop/SmartCalc_v1.0/s21_realsmartcalc.app/Contents/MacOS/realsmartcalc

install:
	$(MK) ./build
	cd ./build && qmake ../ && make && mv realsmartcalc.app s21_realsmartcalc.app
	@mkdir $(HOME)/Desktop/SmartCalc_v1.0/
	@cp -rf $(APP) $(HOME)/Desktop/SmartCalc_v1.0/

uninstall:
	@rm -rf $(HOME)/Desktop/SmartCalc_v1.0

dist:
	rm -rf Archive_SmartCalc_v1.0/
	mkdir Archive_SmartCalc_v1.0/
	mkdir Archive_SmartCalc_v1.0/src
	cp Makefile backend/*.c backend/*.h *.pro frontend/*.cpp \
	 backend/tests/*.c backend/tests/*.h makefile\
	 frontend/*.h ui/*.ui Archive_SmartCalc_v1.0/src/
	tar cvzf Archive_SmartCalc_v1.0.tgz Archive_SmartCalc_v1.0/
	mv Archive_SmartCalc_v1.0.tgz $(HOME)/Desktop/
	rm -rf Archive_SmartCalc_v1.0/

.PHONY: test run clean dist open gcov_report all