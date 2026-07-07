#include "ranker.cpp"


#include <iostream>

using std::cout, std::endl;

int main(){
	Ranker r;
	r.read();

	cout << "how much time are you adding?" << endl;

	//get input
	
	r.add(0);
	
	if(r.isNewRank()){
		cout << "rankup!!" << endl;
	}


}
