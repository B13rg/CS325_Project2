#ifndef ALG1
#define ALG1

#include <vector>
#include <iostream>

using namespace std;
vector<int> greedy(vector<int> values, int number){
	int goal = number;
	vector<int> totals(values.size(), 0);
	int it = values.size()-1;
	
	while(goal > 0){
		cout << goal << endl;
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
