P?=c1e1
OBJECTS=
CFLAGS = -g -Wall -O3
LDLIBS=
CC=c99

$(P): $(OBJECTS)

.PHONY: clean
clean:
	@rm $P

.PHONY: run
run: $(P)
	@./$P
