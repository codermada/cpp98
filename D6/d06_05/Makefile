compile: main.cpp
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp
	./a.out

leak-check: main.cpp
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp
	valgrind ./a.out

no-unused:
	c++ -Wall -Wextra -Werror -Wno-unused -std=c++98 main.cpp
	./a.out