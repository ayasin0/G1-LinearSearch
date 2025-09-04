linear_search: main.o OutputClassHeading.o OutputStringOfCharacter.o EndOfProgramBanner.o
	g++ -std=c++20 -Wall -Werror -o run-test main.cpp OutputClassHeading.o OutputStringOfCharacter.o EndOfProgramBanner.o

main.o: main.cpp linear_search_header.h
	g++ -std=c++20 -Wall -Werror -c main.cpp

OutputClassHeading.o: OutputClassHeading.cpp linear_search_header.h
	g++ -std=c++20 -Wall -Werror -c OutputClassHeading.cpp
	
OutputStringOfCharacter.o: OutputStringOfCharacter.cpp OutputClassHeading.cpp linear_search_header.h
	g++ -std=c++20 -Wall -Werror -c OutputStringOfCharacter.cpp

EndOfProgramBanner.o: EndOfProgramBanner.cpp linear_search_header.h
	g++ -std=c++20 -Wall -Werror -c EndOfProgramBanner.cpp

clean:
	-rm *.o linear_search
