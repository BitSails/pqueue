https://www.youtube.com/watch?v=aw9wHbFTnAQ 
CFLAGS=-std=c++17 -c -Wall

# (min) heap priority queue
pqh: PQHclient.o PQH.o
	@printf "\033[33mLinking Priority Queue ADT (heap implementation)...\n\033[0m"
	g++ PQHclient.o PQH.o -o pqh.out
	@printf "\nRun by typing 'make run-pqh'\n"

PQHclient.o: PQHclient.cpp
	@printf "\033[36mCompiling Priority Queue ADT (heap implementation)...\n\033[0m"
	g++ $(CFLAGS) PQHclient.cpp

PQH.o: PQueueH.cpp
	g++ $(CFLAGS) PQueueH.cpp



# (unsorted) vector priority queue
pqv: PQVclient.o PQV.o
	@printf "\033[33mLinking Priority Queue ADT (vector implementation)...\n\033[0m"
	g++ PQVclient.o PQV.o -o pqv.out
	@printf "\nRun by typing 'make run-pqv'\n"

PQVclient.o: PQVclient.cpp
	@printf "\033[36mCompiling Priority Queue ADT (vector implementation)...\n\033[0m"
	g++ $(CFLAGS) PQVclient.cpp

PQV.o: PQueueUV.cpp
	g++ $(CFLAGS) PQueueUV.cpp



# if user types "make run" by accident
run:
	@printf "\033[31mTo run, use one of\033[0m \nmake run-pqh\nmake run-pqv\n\n"



run-pqh:
	./pqh.out

run-pqv:
	./pqv.out


# Remove non-source files
clean:
	rm -f *.out *.o 
