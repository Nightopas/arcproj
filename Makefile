# all : prog

prog : main.o libMemLib.a
	gcc -Wall -o prog main.o -L. -lMemLib
MSC : main.o libMemLib.a
	gcc -Wall -o MSC main.o -L. -lMemLib
main.o : main.c
	gcc -Wall -c main.c
libMemLib.a: sc_memoryInit.o sc_memorySet.o sc_memoryGet.o sc_memorySave.o sc_memoryLoad.o sc_regInit.o sc_regSet.o sc_regGet.o sc_commandEncode.o sc_commandDecode.o
	ar cr libMemLib.a sc_memoryInit.o sc_memorySet.o sc_memoryGet.o sc_memorySave.o sc_memoryLoad.o sc_regInit.o sc_regSet.o sc_regGet.o sc_commandEncode.o sc_commandDecode.o
sc_memoryInit.o : sc_memoryInit.c
	gcc -Wall -c sc_memoryInit.c
sc_memorySet.o : sc_memorySet.c
	gcc -Wall -c sc_memorySet.c
sc_memoryGet.o : sc_memoryGet.c
	gcc -Wall -c sc_memoryGet.c
sc_memorySave.o : sc_memorySave.c
	gcc -Wall -c sc_memorySave.c
sc_memoryLoad.o : sc_memoryLoad.c
	gcc -Wall -c sc_memoryLoad.c
sc_regInit.o : sc_regInit.c
	gcc -Wall -c sc_regInit.c
sc_regSet.o : sc_regSet.c
	gcc -Wall -c sc_regSet.c
sc_regGet.o : sc_regGet.c
	gcc -Wall -c sc_regGet.c
sc_commandEncode.o : sc_commandEncode.c
	gcc -Wall -c sc_commandEncode.c
sc_commandDecode.o : sc_commandDecode.c
	gcc -Wall -c sc_commandDecode.c
