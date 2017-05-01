#include <iostream>
#include <vector>

#include "file_io.h"
#include "alg1.h"
#include "alg2.h"
#include "alg3.h"

using namespace std;

int main(int argc, char *argv[]){
	vector< vector<int > > numbers = file_input("Amount.txt");
	vector<int> temp;
	vector<vector<int> > input;

	cout << numbers.size() << endl;

	
	if(argc > 1)
		switch(atoi(argv[1])){
			case 1:	//only run 1st algorithm
					return 0;
			case 2:	//only run 2nd algorithm
					for(size_t i=0; i < numbers.size(); i+=2){
						temp = greedy(numbers[i], numbers[i+1][0]);
					}
					for(size_t i=0; i < temp.size(); i++)
						cout << temp[i] << " ";
					cout << endl;
					return 0;
			case 3:	//only run 3rd algorithm
					return 0;
			default:	break;
		}

			
			
	return 0;
}


