CC = gcc
CFLAGS = -c -Wall 
TOPDIR = $(PWD)
OBJDIR = $(TOPDIR)/obj/
SRCDIR = $(TOPDIR)/src/
INCDIR = $(TOPDIR)/inc/
BINDIR = $(TOPDIR)/bin/
SRCLIST = $(wildcard $(SRCDIR)*.c)
OBJTEMO = $(basename $(SRCLIST))
OBJTEMP1 = $(addsuffix .o ,$(OBJLIST))
<<<<<<< HEAD
#OBJTEMP2 = $(notdir $(OBJTEMP))
=======
OBJTEMP2 = $(notdir $(OBJTEMP))
>>>>>>> ae2107c (just a test)
OBJ = $(addprefix $(OBJDIR),$(OBJTEMP1))
BIN = $(BINDIR)test

all:CHECKDIR test
CHECKDIR:
	mkdir -p $(OBJDIR) $(BINDIR)
test:$(BIN)
$(BIN):$(OBJ)
<<<<<<< HEAD
	$(CC) $^ -o $@
$(OBJDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) $^ -o $@
=======
	$(CC) $(SRCLIST) -o $@
$(OBJDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) $^ -o $@

>>>>>>> ae2107c (just a test)
.PHONY:clean
clean:
	rm -rf $(OBJDIR) $(BINDIR)
