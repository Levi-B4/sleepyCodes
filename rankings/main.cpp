#include "ranker.cpp"
#include "ftxTest.cpp"

#include <json/json.h>

#include <iostream>
#include <fstream>



using std::cout, std::endl;

int main(){
	Json::Value root;
	std::ifstream config_doc("config_doc.json", std::ifstream::binary);
	config_doc >> root;
	
	testing();
	Ranker r;
	r.read();

	cout << "how much time are you adding?" << endl;

	//get input
	
	r.add(0);
	
	if(r.isNewRank()){
		cout << "rankup!!" << endl;
	}


}
