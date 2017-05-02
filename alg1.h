#ifndef	ALG2
#define AGL2

#include <vector>
#include <climits>

using namespace std;

vector<int> changeslow(vector<int> values, int number){
	if(values.empty()){
		vector<int> none(1, INT_MAX);
		return none;
	}
	
	int goal = number;
	vector<int> totals(values.size(), 0);
	int it = values.size()-1;
	
	//find using greedy ish algorithm
	while(goal > 0){
		if(values[it] <= goal){
			goal -= values[it];
			totals[it]++;
		} else{
			it--;
		}
	}
	
	//Get smallest amount of coins using values-1
	vector<int> temp = values;
	temp.pop_back();
	vector<int> compare = changeslow(temp, number);
	
	int sum1=0, sum2=0;
	
	//Get total number of coins for each
	for(auto n : totals)
		sum1 += n;
	for(auto n : compare)
		sum2 += n;
	
	//return smallest number of coins
	return (sum1 < sum2) ? totals : compare;
}

#endif
