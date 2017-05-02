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
	cout << "Step 1" << endl;	
	for(size_t n=0; n< values.size(); n++)
		holder[n][0] = 1;
		
	cout << "Step 2" << endl;
	vector<vector<int> > totals(values.size(), vector<int>(number+1, 0));
	cout << "Size: " << values.size() << endl;
	for(size_t i=1; i<values.size(); i++){
		for(int j=1; j<=number; j++){
			cout << "j: " << j << " i: " << i << endl;
			if(values[i-1] <= j){
				holder[i][j] = holder[i-1][j] + holder[i][j-values[i-1]];
				totals[i][j] += 1;
			} else {
				holder[i][j] = holder[i-1][j];
				totals[i][j] = holder[i-1][j];
			}
				
		}
	}
	
	return totals[values.size()];
}
#endif
