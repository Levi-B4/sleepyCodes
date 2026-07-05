#include "mSSquare.h"

#include <string>

using std::string;

MSSquare::MSSquare(bool isBomb){
	this->isBomb = isBomb;
}

int MSSquare::activate(){
	isVisible = true;

	return 0;
}

void MSSquare::plantBomb(){
	isBomb = true;
}

string MSSquare::print(){
	if(!isVisible){
		return "□";
	}

	if(isBomb){
		return "☆";
	}

	return "▪︎";
}
