#include <iostream>
#include <sstream>
using namespace std;

int exercise4();
bool isPalindrome(int);
bool hasTwoThreeDigitFactors(int);
string getReverse(string);
bool isPrime(int);
string intToString(int);

int main(){
	cout << "Exercise 4: " << exercise4() << endl;
	return 0;
}

int exercise4(){
	for (int i = 997799; i >= 10000; i--){
		if (isPalindrome(i) && hasTwoThreeDigitFactors(i)) return i;
	}
	return 0;
}

bool isPalindrome(int numberToCheck){
	string numericString = intToString(numberToCheck);
	if (numericString.length() % 2 != 0) return false;
	int halfLength = numericString.length() / 2;
	string firstHalf = numericString.substr(0, halfLength);
	string secondHalf = numericString.substr(halfLength);
	string reversed = getReverse(firstHalf);
	return reversed == secondHalf;
}

string getReverse(string stringToReverse){
	string result = "";
	for (unsigned int i = 0; i < stringToReverse.length(); i++){
		result = stringToReverse[i] + result;
	}
	return result;
}

bool hasTwoThreeDigitFactors(int numberToCheck){
	if (isPrime(numberToCheck)) return false;
	for (int i = 100; i < 1000; i++){
		if (numberToCheck % i == 0){
			string otherFactor = intToString(numberToCheck / i);
			if (otherFactor.length() == 3) return true;
		}
	}
	return false;
}

bool isPrime(int numberToCheck){
	if (numberToCheck % 2 == 0) return false;
	for(int i=3;i*i<=numberToCheck;i+=2) {
		if (numberToCheck %  i == 0) return false;
	}
	return true;
}

string intToString(int intToConvert){
	stringstream stream;
	stream << intToConvert;
	return stream.str();
}
