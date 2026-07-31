#include "ranker.cpp"
#include "appRanker.cpp"

#include <json/json.h>

#include <iostream>
#include <fstream>
#include <string>

using std::string;


using std::cout, std::endl;

int main(int argc , char *argv[]){
	AppRanker ar;
	Ranker r;
	r.read(string(argv[1]));

	cout << "how much time are you adding?" << endl;

	//get input
	
	r.add(0);
	
	if(r.isNewRank()){
		cout << "rankup!!" << endl;
	}
}
