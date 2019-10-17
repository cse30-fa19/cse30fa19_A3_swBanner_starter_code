#
# CSE30 Makefile
#
# we declare the object we want to build in the variable EXE
# we list the objects we want to compile (from c) in OBJS
#
# we provide a phony target clean to rm all the .o files
#

EXE = swBanner
OBJS = main.o fontDB.o buffer.o
CFLAGS = -std=c99 -Wall -Wextra
.PHONY: clean

$(EXE) : $(OBJS)
	gcc -Wall -Wextra -o $@ $(OBJS)

main.o : main.c globals.h
fontDB.o : fontDB.c globals.h
buffer.o : buffer.c globals.h

clean :
	rm $(EXE)
	rm -f $(OBJS)
