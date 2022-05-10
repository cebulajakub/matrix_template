CXXFLAGS= -c -g -std=c++11 -iquote inc -Wall -pedantic
TRGDIR=/tmp/bk/test_wektora
OBJ=/tmp/bk/test_wektora/obj


__start__: ${TRGDIR}/test_wektora
	${TRGDIR}/test_wektora

${OBJ}:
	mkdir -p ${OBJ}

${TRGDIR}/test_wektora: ${OBJ} ${OBJ}/main.o ${OBJ}/Wektor.o
	g++ -o ${TRGDIR}/test_wektora ${OBJ}/main.o ${OBJ}/Wektor.o

${OBJ}/main.o: src/main.cpp inc/Wektor.hh
	g++ -c ${CXXFLAGS} -o ${OBJ}/main.o src/main.cpp

${OBJ}/Wektor.o: src/Wektor.cpp inc/Wektor.hh
	g++ -c ${CXXFLAGS} -o ${OBJ}/Wektor.o src/Wektor.cpp
