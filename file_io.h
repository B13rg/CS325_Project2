#ifndef FILE_IO
#define FILE_IO

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

//Opens premade file
//Returns vector of vectors holding data from input file
vector<vector<int> > file_input(string name){
	ifstream file;
	string line;
	vector<vector<int> >values;
	
	file.open(name);
	
	//Go through file and pull data
	if(file.is_open()){
		//Pull each line from file
		while(getline(file, line)){
			int n;
			vector<int> temp;
			stringstream stream(line);
			
			//For each element, push into temp vector
			for(int i=0; stream; i++){
				stream >> n;
				temp.push_back(n);	
			}
			
			temp.pop_back();
			//Push temp vector into true vector
			values.push_back(temp);
		}
		//Done with file
		file.close();
	}
	return values;
}

//////////////////////////////////////////////////////////////////////////////
//int type can be:
//1: Brute Force
//2: Greedy
//3: Dynamic Programming
void file_output(vector<int> input_coins, vector<int> output_coins, int type){
	ofstream file ("Amountchange.txt", ios::app);
	if(file.is_open()){
		switch(type){
			case 1:	file << "Brute Force\n"; break;
			case 2: file << "Greedy Algorithm\n"; break;
			case 3: file << "Dynamic Programming\n"; break;
			default: break;
		}
		//Add complete array to file
		for(size_t i=0; i < input_coins.size(); i++)
			file << input_coins[i] << " ";
		file << "\n";
		//Add sub array to file
		for(size_t i=0; i < output_coins.size(); i++){
			//for(size_t k=0; k < output_coins[i].size(); i++)
				file << output_coins[i] << " ";
			//file << '\n';
		}
		int sum =0;
		for(auto n : output_coins)
			sum += n;
		file << sum;
		file << "\n";
		file.close();
	}	
}

#endif




