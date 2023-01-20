#include <iostream>
#include <cmath>
#include <climits>
#include <fstream>

using namespace std;

int main(){
	// Define variables
	unsigned long long int n; // 64-bit integer
	ofstream file;

	// Iterate, evaluate & compare
	for (n = 0; n <= ULLONG_MAX; n++){
		if(tan(n) > n){
		      file.open("tan-n-sol.txt", ios::app);
		      file << n << ",";
		      file.close();
		}
	}
}
