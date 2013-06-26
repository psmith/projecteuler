#include <iostream>
#include <math.h>
using namespace std;

int exercise3();
bool isPrime(double);
double getHighestPrimeMultiple(double);

int main(){
	cout << "Exercise 3: " << exercise3() << endl;
	return 0;
}

int exercise3(){
	double numberToSearch = 600851475143;
	return getHighestPrimeMultiple(numberToSearch);
}

double getHighestPrimeMultiple(double numberToCheck){
	double highestMultiple = numberToCheck;
	double highestCandidate = 0;
	for (double i = 2; i < highestMultiple; i++){
		if (fmod(numberToCheck, i) == 0) {
			highestMultiple = numberToCheck / i;
			if (isPrime(i) && i > highestCandidate){
				highestCandidate = i;
			}
			if (isPrime(highestMultiple))
				return highestMultiple;
		}
	}
	return highestCandidate;
}

bool isPrime(double numberToCheck){
	if (fmod(numberToCheck, 2) == 0) return false;
	for(int i=3;i*i<=numberToCheck;i+=2) {
		if (fmod(numberToCheck, i) == 0) return false;
	}
	return true;
}
