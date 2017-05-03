#ifndef ALG2
#define ALG2

#include <vector>

using namespace std;
vector<int> changegreedy(vector<int> values, int number){
	int goal = number;
	vector<int> totals(values.size(), 0);
	int it = values.size()-1;
	
	while(goal > 0){
		
		if(values[it] <= goal){
			goal -= values[it];
			totals[it]++;
		} else{
			it--;
		}
	}
	return totals;
}


#endif
