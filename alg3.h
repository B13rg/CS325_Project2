#ifndef ALG3
#define ALG3

#include <vector>
#include <iostream>
#include <climits>

using namespace std;

vector<int> changedp(vector<int> values, int number){
	if(!number){
		vector<int> none(1, 0);
		return none;
	}

	vector<vector<int> > holder(values.size(), vector<int>(number+1, 0));
	
	vector<int> T(number+1, INT_MAX-1);
	vector<int> R(number+1, -1);
	
	T[0] = 0;
	
	for(size_t j=0; j<values.size(); j++)
		for(int i=1; i<= number; i++)
			if(i >= values[j])
				if(T[i-values[j]]+1 < T[i]){
					T[i] = 1+T[i-values[j]];
					R[i] = j;
				}
					
	
	vector<int> used(values.size(), 0);
	int start = R.size()-1;
	while(start != 0){
		int j = R[start];
		used[j]++;
		start = start-values[j];
	}
	return used;
}
#endif
