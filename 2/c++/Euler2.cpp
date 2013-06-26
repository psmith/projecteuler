#include <iostream>
using namespace std;

int exercise2();

int main(){
	cout << "Exercise 2: " << exercise2() << endl;
	return 0;
}

int exercise2(){
	int firstNumber = 1;
	int previousSecond = 0;
	int secondNumber = 2;
	int sum = 0;
	while (secondNumber <= 4000000){
		if (secondNumber % 2 == 0)
			sum += secondNumber;
		previousSecond = secondNumber;
		secondNumber = firstNumber + secondNumber;
		firstNumber = previousSecond;
	}
	return sum;
}
