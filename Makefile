gprobe : gprobe.o CPingSweep.o
	g++ -o bin/gprobe obj/CHostList.o obj/CPingSweep.o obj/arguments.o obj/gprobe.o

gprobe.o : arguments.o
	g++ -c gprobe.cpp -o obj/gprobe.o
	
arguments.o : 
	g++ -c arguments.cpp -o obj/arguments.o
	
CPingSweep.o : CHostList.o
	g++ -c CPingSweep.cpp -o obj/CPingSweep.o	
	
CHostList.o :
	g++ -c CHostList.cpp -o obj/CHostList.o	
	
clean :
	rm obj/* 
	rm bin/*
