#include <iostream>
using namespace std;

int problem1();

int main(){
	cout << "Problem 1: " << problem1() << endl;
	return 0;
}

int problem1(){
	int sum = 0;
	for (int i = 1; i < 1000; i++){
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	return sum;
}
