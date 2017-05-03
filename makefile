.DEFAULT_GOAL := timer

debug:
	g++ -g -Wall -pedantic -ansi -std=c++11 -o change.sh ./main.cpp
	
release:
	g++ -g -std=c++11 -o change.sh ./main.cpp

timer:
	g++ -g -Wall -pedantic -ansi -std=c++11 -o timer.sh ./timer.cpp
clean:
	-rm *.sh
