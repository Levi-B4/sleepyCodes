#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <fstream>
#include <string>

using std::ifstream, std::ofstream, std::string;


class FileHandler{
	private:
		ifstream dataFile;
		ofstream backupFile;
	public:
		FileHandler();
		setDataFile(string 
};


#endif //FILEHANDLER_H
