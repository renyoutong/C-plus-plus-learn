#隐含规则
INCL=-I /home/ubuntu/work/C-plus-plus-learn/include
OBJ=Helloworld.o

.SUFFIXES: .cpp
.cpp.o:
	g++ ${INCL} -c $<

all: Helloworld

#C++编译
Helloworld:${OBJ}
	@echo "===========Start complie=========="
	g++ -o $@ $?
	rm -f ${OBJ}
	@echo "===========Finsh complie=========="
