#ifndef MSSQUARE_H
#define MSSQUARE_H

#include <string>

using std::string;

class MSSquare{
	private:
		bool isBomb = false;
		bool isVisible =false;
	public:
		MSSquare(bool isBomb = false);

		int activate();
		void plantBomb();
		string print();
};

#endif //MSSQUARE_H
