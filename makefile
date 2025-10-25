CC = gcc

TARGET = arithmetic_app
SRCS = main.c add.c sub.c mul.c
OBJS = main.o add.o sub.o mul.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

