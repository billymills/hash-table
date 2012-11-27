CC = g++
CFLAGS = -Wall -Wextra


etest: entry_test.cpp Entry.o
	$(CC) $(CFLAGS) -o etest entry_test.cpp Entry.o

Entry.o: Entry.h Entry.cpp
	$(CC) $(CFLAGS) -c Entry.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f etest
