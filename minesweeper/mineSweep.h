#ifndef MINESWEEP_H
#define MINESWEEP_H

#include "mSSquare.h"

#include <string>
#include <vector>

using std::string, std::vector;

class MineSweep{
	private:
		vector<vector<MSSquare>> grid;
		int width = 0;
		int height = 0;

	public:
		MineSweep();

		string startGame(
				int height = 10,
				int width = 10,
				int numBombs = 10
				);
		string board();


};

#endif //MINESWEEP_H
