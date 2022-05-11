#
#  To sa opcje dla kompilacji
#
CXXFLAGS= -c -g -Iinc -Wall -pedantic

__start__: uklad_rownan
	./uklad_rownan

uklad_rownan: obj/main.o obj/UkladRownanLiniowych.o obj/Macierz.o obj/Wektor.o
	g++ -Wall -pedantic -o uklad_rownan obj/main.o obj/Wektor.o\
                                   obj/Macierz.o obj/UkladRownanLiniowych.o

obj/main.o: src/main.cpp inc/UkladRownanLiniowych.hh inc/Macierz.hh inc/Wektor.hh\
        inc/rozmiar.h
	g++ ${CXXFLAGS} -o obj/main.o src/main.cpp

ob/LZespolona.o: src/LZespolona.cpp inc/LZespolona.hh
	g++ ${CXXFLAGS} -o obj/LZespolona.o src/LZespolona.cpp
	
clean:
	rm -f obj/*.o uklad_rownan
