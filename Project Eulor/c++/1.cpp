#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> multiples;
	int total = 0;
	
	for (int i=1; i<1000; i++){
		if (i % 3 == 0){
			multiples.push_back(i);
		}
		else if(i % 5 == 0){
			multiples.push_back(i);
		}
	}
	
	for (int i=0; i < multiples.size(); i++){
		total += multiples[i];
	}
	
	cout << total << endl;
}
