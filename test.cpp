#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
#define ROWS 4
#define COLS 3

int main(){
	float weights [COLS]; 
	float expected, out;
	const double learning_rate = .1;
	int i;
	int count = 0;
	bool correct = 0;
	int threshold, x1, x2; 
	float weightsum, deltaw1, deltaw2;
	int train [ROWS][COLS];
	for (i = 0; i < 4 ; i++){
		for (int j = 0; j < 3; j++){
			cin >> train[i][j];
		}
	}	
	srand((unsigned)(time(0)));
	rand();
	threshold = -1;
	weights[0] = fabs((float)(rand())/(32767/2)-1);
	for ( i = 1; i < 3; ++i){
		weights[i] = (float)(rand())/(32767/2) - 1;
	}	
	cout << "Initial weights" << endl << "---------------" << endl;
	for (i = 0; i < COLS; i++){
		cout << "weight "<<i<<" = " << weights[i] << endl;
	}
	//francisco
	
	cout << endl << endl;
	cout << "Final Weights" << endl << "-------------" << endl;
	for (i = 0; i < COLS; i++){
		cout << "weight "<<i<<" = " << weights[i] << endl;
	}
	cout << endl << "Desicion line function: " << endl << "-------------" << endl;
	cout << weights[0] << "x + " << weights[1] << "y + " << weights[2] << " = 0" << endl;
	return 0;
}