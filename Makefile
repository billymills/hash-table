CC = g++
CFLAGS = -Wall -Wextra


etest: entry_test.cpp Entry.o Hash.o
	$(CC) $(CFLAGS) -o etest entry_test.cpp Entry.o Hash.o

Entry.o: Entry.h Entry.cpp
	$(CC) $(CFLAGS) -c Entry.cpp

Hash.o: Hash.h Hash.cpp
	$(CC) $(CFLAGS) -c Hash.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f etest
