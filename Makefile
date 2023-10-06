CC = g++
CCFLAGS = -ansi -pedantic-errors -Wall 

fa: frequencyAnalysis.cpp 
	$(CC) $(CCFLAGS) -std=c++11 -o fa frequencyAnalysis.cpp


clean:
	rm -f fa