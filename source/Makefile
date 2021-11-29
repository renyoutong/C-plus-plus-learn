#https://blog.csdn.net/zong596568821xp/article/details/81134406

CC = g++
TARGET = test
INCL = $(shell find . -name "*.h")
SRC = $(shell find . -name "*.cpp")
OBJ = $(SRC:%.cpp = %.o)

$(TARGET):$(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

%.o:%.c $(INCL)
	$(CC) -c $< -o $@

.PHONY:clean
clean:
	$(RM) *.o *.exe
