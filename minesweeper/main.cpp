#include "mineSweep.cpp"
#include <iostream>


int main() {
	    std::cout << "Hello, World!" << std::endl;

	MineSweep a;
	std::cout << "start game:\n" << a.startGame() << std::endl;

	std::cout << "board:\n" << a.board() << std::endl;

	return 0;

}

