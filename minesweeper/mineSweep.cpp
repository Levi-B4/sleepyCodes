#include "mineSweep.h"
#include "mSSquare.cpp"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using std::string, std::vector, std::stringstream;

MineSweep::MineSweep(){

}

string MineSweep::startGame(int height, int width, int numBombs){
	this->height = height;
	this->width = width;
	vector<MSSquare> source;
	std::fill(source.begin(), source.end(), MSSquare{});


	std::fill(grid.begin(), grid.end(), source);

	// random numbers 0 to (height*width-1)
	// make sure they dont repeat
	// rand/width = y
	// rand%width = x
	// grid[x][y].plantBomb()

	return board();
}

string MineSweep::board(){
	stringstream output;

	output << ' ';

	for(char i = 'a'; i - 'a' < width; i++){
		output << i;
	}
	std::cout << "start" << output.str() << "end" << std::endl;

	output << '\n';

	for(int i = 0; i < height; i++){
		output << '\n' << 'a' + i;
		for(int j; j < width; j++){
			output << grid[i][j].print();
		}
	}


	return output.str();
}
