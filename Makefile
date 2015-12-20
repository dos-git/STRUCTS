#APP       = test_bst

#SRCS      = $(wildcard *.c)
#SRCS      = $(test_bst.c)
#OBJS      = $(SRCS:.c=.o)

#CUNIT_DIR = /usr/include/CUnit

#INCLUDES  = $(CUNIT_DIR)
#CFLAGS    = -Wall $(INCLUDES)

#LDFLAGS   = -L$(CUNIT_DIR)
#LIBS      = -lcunit


# Rules section
#
prog_str :
	gcc main.c -o main

test_str :
	gcc test_bst.c -o test_bst -lcunit

clean :
	rm main
