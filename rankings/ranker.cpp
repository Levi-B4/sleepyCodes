#include "ranker.h"

#include <string>
#include <fstream>

#include <json/json.h>


using std::string;
using std::ifstream;

using Json::Value;

Ranker::Ranker(){}



bool Ranker::isNewRank(){
	return true;	
}

void Ranker::read(string path){
	Value root;
	ifstream dataFile(path, ifstream::binary);
	dataFile >> root;
}

void Ranker::add(int elo){

}
