#隐含规则
INCL=-I /home/ubuntu/work/C-plus-plus-learn/include
OBJ=Helloworld.o variable.o

.SUFFIXES: .cpp
.cpp.o:
	g++ ${INCL} -c $<

all: Helloworld variable clean

#C++编译
Helloworld:${OBJ}
	g++ -o $@ $?

variable:${OBJ}
	g++ -o $@ $?

clean:
	rm -rf *.o
