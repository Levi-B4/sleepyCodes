#include <iostream>
#include <vector>

using std::vector;


int numDivisors(long input){
    if(input == 1){
        return 1;
    }

    int max = input;
    // 1 and input itself are always divisors
    int output = 2;

    for(long i = 2; i < max; i++){
        if(input % i == 0){
           output += 2;
           max = input / i;
        }
    }

    return output;
}

// doing 12 instead
int main(){
    long tNum = 0;
    int minNumDivisors = 500;

    for(long i = 1;; i++){
        tNum += i;

        int nDiv = numDivisors(tNum);

        if(nDiv >= minNumDivisors){
            std::cout << tNum << std::endl;
            break;
        }
    }

    return 1;
}





















