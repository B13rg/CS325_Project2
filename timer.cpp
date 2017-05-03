#include "alg1.h"
#include "alg2.h"
#include "alg3.h"

#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <ctime>

using namespace std::chrono;
using namespace std;

int main(){
	srand(time(NULL));
	
	duration<double> times[4][4];	//Duration intializes to 0
	
	int t1[] = {1,2,6,12,24,48,60};
	int t2[] = {1,5,10,25,50};
	int t3[] = {1,6,13,37,150};
	vector<int> v1 (t1, t1 + sizeof(t1) / sizeof(int));
	vector<int> v2 (t2, t2 + sizeof(t2) / sizeof(int));
	vector<int> v3 (t3, t3 + sizeof(t3) / sizeof(int)); 
	vector<int> a1 (50);
	vector<int> a2 (200);

		
	
	//////////////////////////////////////////////////////alg1
	
	for(int i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changeslow(v1, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[0][0] += duration_cast<duration<double>>(finish-start);		
	}
	for(int i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changeslow(v2, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[0][0] += duration_cast<duration<double>>(finish-start);		
	}
	for(int i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changeslow(v3, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[0][0] += duration_cast<duration<double>>(finish-start);		
	}
	
	
	/////////////////////////////////////////////////////////alg2
	for(int i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changegreedy(v1, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[1][0] += duration_cast<duration<double>>(finish-start);		
	}
	for(int i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changegreedy(v2, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[1][0] += duration_cast<duration<double>>(finish-start);		
	}	
	for(int i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changegreedy(v3, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[1][0] += duration_cast<duration<double>>(finish-start);		
	}

	for(int i=0; i<a2.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changegreedy(v1, a2[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[1][1] += duration_cast<duration<double>>(finish-start);		
	}
	for(int i=0; i<a2.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changegreedy(v2, a2[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[1][0] += duration_cast<duration<double>>(finish-start);		
	}
	for(int i=0; i<a2.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changegreedy(v3, a2[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[1][0] += duration_cast<duration<double>>(finish-start);		
	}


	////////////////////////////////////////////////////////alg3
	
	for(int i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changedp(v1, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[1][0] += duration_cast<duration<double>>(finish-start);		
	}
	for(int i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changedp(v2, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[1][0] += duration_cast<duration<double>>(finish-start);		
	}	
	for(int i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changedp(v3, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[1][0] += duration_cast<duration<double>>(finish-start);		
	}

	for(int i=0; i<a2.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changedp(v1, a2[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[1][1] += duration_cast<duration<double>>(finish-start);		
	}
	for(int i=0; i<a2.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changedp(v2, a2[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[1][0] += duration_cast<duration<double>>(finish-start);		
	}
	for(int i=0; i<a2.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changedp(v3, a2[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[1][0] += duration_cast<duration<double>>(finish-start);		
	}
	/////////////////////////////////////////////////////////////alg4
	/*for(int i=0; i<5; i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		linearTime(tens[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[3][0] += duration_cast<duration<double>>(finish-start);		
	}
	for(int i=0; i<5; i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		linearTime(hundred[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[3][1] += duration_cast<duration<double>>(finish-start);		
	}
	for(int i=0; i<5; i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		linearTime(thousand[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[3][2] += duration_cast<duration<double>>(finish-start);		
	}
	for(int i=0; i<5; i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		linearTime(tenthous[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		times[3][3] += duration_cast<duration<double>>(finish-start);		
	}
	*/
	
	
	
	//Clean up results and output to screen
	for(int i=0; i< 4; i++){
		for(int j=0; j<4; j++)
			cout << times[i][j].count() / 5 << ",";
		cout << endl;
	}
		
	return 0;
}
