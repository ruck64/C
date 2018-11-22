CC=gcc
CFLAGS=-I. -g
CLOCK=smallestDegreeClock


clock: $(CLOCK).c
		$(CC) $(CFLAGS) $(CLOCK).c -o $(CLOCK)

clean:
	rm -f $(CLOCK)
