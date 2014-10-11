CFLAGS+=-std=c99
BIN=structalicious
OBJS=main.o b.o

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $^ $(LDFLAGS) -o $@

clean:
	$(RM) $(BIN) $(OBJS)

.PHONY: all clean
