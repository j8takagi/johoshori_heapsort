CFLAGS := -g -Wall -Wextra

.PHONY: all clean distclean

all: test_heapsort

test_heapsort: heapsort.o test_heapsort.o

clean:
	$(RM) *.o

distclean: clean
	$(RM) test_heapsort
