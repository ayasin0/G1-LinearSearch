linear_search: main.o OutputClassHeading.o OutputStringOfCharacter.o EndOfProgramBanner.o CatalogTitleFormatVector.o search.o
	g++ -std=c++20 -Wall -Werror -o run-test main.o OutputClassHeading.o OutputStringOfCharacter.o EndOfProgramBanner.o CatalogTitleFormatVector.o search.o

main.o: main.cpp linear_search_header.h
	g++ -std=c++20 -Wall -Werror -c main.cpp

OutputClassHeading.o: OutputClassHeading.cpp linear_search_header.h
	g++ -std=c++20 -Wall -Werror -c OutputClassHeading.cpp
	
OutputStringOfCharacter.o: OutputStringOfCharacter.cpp OutputClassHeading.cpp linear_search_header.h
	g++ -std=c++20 -Wall -Werror -c OutputStringOfCharacter.cpp

EndOfProgramBanner.o: EndOfProgramBanner.cpp linear_search_header.h
	g++ -std=c++20 -Wall -Werror -c EndOfProgramBanner.cpp

CatalogTitleFormatVector.o: CatalogTitleFormatVector.cpp linear_search_header.h
	g++ -std=c++20 -Wall -Werror -c CatalogTitleFormatVector.cpp

search.o: search.cpp linear_search_header.h
	g++ -std=c++20 -Wall -Werror -c search.cpp

clean:
	-rm *.o linear_search
