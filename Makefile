CC = g++
CFLAGS = -Wall -Wextra

SRC = ./src
BUILD = ./build

$(BUILD)/etest: $(SRC)/entry_test.cpp $(SRC)/Entry.o $(SRC)/Hash.o
	$(CC) $(CFLAGS) -o $(BUILD)/etest $(SRC)/entry_test.cpp $(SRC)/Entry.o $(SRC)/Hash.o

clean:
	cd $(BUILD); rm -f etest
	cd $(SRC); $(MAKE) clean
