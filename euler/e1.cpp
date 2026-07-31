#include <iostream>

int sumMultiples(int max, int x, int y){
	int output = 0;

	for(int i = 0; i < max; i++){
		if(i % x == 0 || i % y == 0){
			output += i;
		}
	}

	return output;
};

int main(){
	int output = sumMultiples(1000, 3, 5);

	std::cout << output << std::endl;

	return 1;
};
