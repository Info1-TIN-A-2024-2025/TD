#
# Makefile
#

# set the executable name
EXEC=app

CC=gcc
CFLAGS+= -std=c99 -Wall
CFLAGS+= -g
CFLAGS+= -D_XOPEN_SOURCE
LDLIBS:= -lm

ODIR:=obj

SRC := $(wildcard *.c)
OBJS = $(patsubst %,$(ODIR)/%,$(SRC:.c=.o))

all: clean $(EXEC) test 

-include $(ODIR)/*.d

$(EXEC): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS) $(LDLIBS)

$(ODIR)/%.o: %.c | $(ODIR)
	$(CC) $(CFLAGS) -c $< -o $@ -MMD -MF $(@:.o=.d)

$(ODIR):
	mkdir $@

clean:
	$(RM) $(EXEC)
	$(RM) -rf $(ODIR)

test: $(EXEC)
	baygon -v -t t.yaml ./$(EXEC)

note:
	touch criteria.yaml
	git commit -m $(python3 .tools/notation.py) .

eval:
	python3 .tools/notation.py	

.PHONY:	clean all test
.DEFAULT: all 
