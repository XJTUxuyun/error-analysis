CC:= gcc

.PHONY: all clean
all: error

error: main.o error_analysis.o
	$(CC) -o error main.o error_analysis.o

main.o: main.c
	$(CC) -c main.c

error_analysis.o: error_analysis.c
	$(CC) -c error_analysis.c

clean:
	-rm *.o
	-rm error

