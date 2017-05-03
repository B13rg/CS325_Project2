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
	
	//duration<double> times[3][3][2];	//Duration intializes to 0
	
	vector<int> v1 = {1,2,6,12,24,48,60};
	vector<int> v2 = {1,5,10,25,50};
	vector<int> v3 = {1,6,13,37,150};

	vector<int> a1 (50);
	vector<int> a2 (200);
	
	for(int n : a1)
		a1[n] = n+1;
	
	for(int n : a2)
		a2[n] = n+2000;
				
	
	//////////////////////////////////////////////////////alg1
	cout << "Changeslow 50 v1" << endl;
	for(size_t i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changeslow(v1, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		cout << duration_cast<duration<double>>(finish-start).count() << "," << endl;		
	}
	cout << "Changeslow 50 v2" << endl;
	for(size_t i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changeslow(v2, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		cout << duration_cast<duration<double>>(finish-start).count() << "," << endl;		
	}
	cout << "Changeslow 50 v3" << endl;
	for(size_t i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changeslow(v3, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		cout << duration_cast<duration<double>>(finish-start).count() << "," << endl;		
	}
	
	
	/////////////////////////////////////////////////////////alg2
	//set of 50
	cout << "Changegreedy 50 v1" << endl;
	for(size_t i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changegreedy(v1, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		cout << duration_cast<duration<double>>(finish-start).count() << "," << endl;		
	}
	cout << "Changegreedy 50 v2" << endl;
	for(size_t i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changegreedy(v2, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		cout << duration_cast<duration<double>>(finish-start).count() << "," << endl;		
	}
	cout << "Changegreedy 50 v3" << endl;	
	for(size_t i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changegreedy(v3, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		cout << duration_cast<duration<double>>(finish-start).count() << "," << endl;		
	}
	//set of 2000+
	cout << "Changegreedy 50 v1" << endl;
	for(size_t i=0; i<a2.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changegreedy(v1, a2[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		cout << duration_cast<duration<double>>(finish-start).count() << "," << endl;		
	}
	cout << "Changegreedy 200 v2" << endl;
	for(size_t i=0; i<a2.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changegreedy(v2, a2[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		cout << duration_cast<duration<double>>(finish-start).count() << "," << endl;		
	}
	cout << "Changegreedy 200 v3" << endl;
	for(size_t i=0; i<a2.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changegreedy(v3, a2[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		cout << duration_cast<duration<double>>(finish-start).count() << "," << endl;		
	}


	////////////////////////////////////////////////////////alg3
	cout << "Changedp 50 v1" << endl;
	for(size_t i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changedp(v1, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		cout << duration_cast<duration<double>>(finish-start).count() << "," << endl;		
	}
	cout << "Changedp 50 v2" << endl;
	for(size_t i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changedp(v2, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		cout << duration_cast<duration<double>>(finish-start).count() << "," << endl;		
	}
	cout << "Changedp 50 v3" << endl;	
	for(size_t i=0; i<a1.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changedp(v3, a1[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		cout << duration_cast<duration<double>>(finish-start).count() << "," << endl;		
	}

	cout << "Changedp 200 v1" << endl;
	for(size_t i=0; i<a2.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changedp(v1, a2[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		cout << duration_cast<duration<double>>(finish-start).count() << "," << endl;		
	}
	cout << "Changedp 200 v2" << endl;
	for(size_t i=0; i<a2.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changedp(v2, a2[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		cout << duration_cast<duration<double>>(finish-start).count() << "," << endl;		
	}
	cout << "Changedp 200 v3" << endl;
	for(size_t i=0; i<a2.size(); i++){
		chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
		changedp(v3, a2[i]);
		chrono::high_resolution_clock::time_point finish = chrono::high_resolution_clock::now();
		cout << duration_cast<duration<double>>(finish-start).count() << "," << endl;		
	}
	
	cout << endl;
	return 0;
}
