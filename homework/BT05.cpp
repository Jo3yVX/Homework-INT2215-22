#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

//by using ceil() and floor() function
int rnd(double num) {
	return abs(ceil(num) - num) < abs(floor(num) - num) ? ceil(num) : floor(num);
}

//without ceil() and floor() function
int rnd2(double num) {
	return 1; //no idea yet
}

//modulo operator will work ...
int randomLessThanN(int n) {
	srand(time(0));
	return rand() % n;
}

void print(int space, int star) {
	for (int i = 0; i < space; i++) cout << " ";
	for (int i = 0; i < star; i++) cout << "*";
}

void printTriangle(int h) {
	for (int i = h-1; i >=0; i--) {
		print(i, 0);
		print(0, 2 * h - 1 - 2 * i);
		cout << endl;
	}
}


int LCM(int a, int b) { //Euclid algo
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	return a;
}

bool prime(int n) {  //Eratosthenes method
	if (n <= 1) return false;
	bool* arr = new bool[n + 1];
	for (int i = 2; i <= n; i++) {
		arr[i] = true;
	}

	for (int i = 2; i < n; i++) {
		if (arr[i] == true) {
			for (int j = 2 * i; j <= n; j += i) {
				arr[j] = false;
			}
		}
	}
	return arr[n];
}

int main() {


	return 0;
}