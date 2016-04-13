P?=c1e1
OBJECTS=
CFLAGS = -std=c99 -g -Wall -O3
LDLIBS=
CC=cc

$(P): $(OBJECTS)

.PHONY: clean
clean:
	@rm $P

.PHONY: run
run: $(P)
	@./$P
