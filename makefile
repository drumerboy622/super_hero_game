CXX = g++ 
CXXFLAGS = -std=c++0x 
LDFLAGS = -lboost_data_time

SRCS = barbarian.cpp blueMen.cpp character.cpp fantasyCombatGame.cpp harryPotter.cpp mainMenu.cpp medusa.cpp vampire.cpp 

HEADERS = barbarian.hpp blueMen.hpp character.hpp fantasyCombatGame.hpp harryPotter.hpp mainMenu.hpp medusa.hpp vampire.hpp 

PDFS = Reflection_Project3.pdf 

make = makefile 

default: ${SRCS}${HEADERS}
	${CXX}${CXXFLAGS}${SRCS}-o project3

clean: 
	rm *project3

zip: 
	 zip -D Project3_Solbrack_Matthew.zip ${SRCS}${HEADERS}${PDFS}${make}
