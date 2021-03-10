#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

//7.1 nothing to implement

//7.2
void test(int arr[]) {
	cout << sizeof(arr) << endl;
	cout << arr << "   " << &arr[0];
}

//7.3
int count_even(int* arr, int n) {
	int c = 0;
	for (int i = 0; i < n; i++) {
		if (*(arr + i) % 2 == 0) c++;
	}
	return c;
}

//7.4
int search(int* nums, int target, int n) {
    int right = n - 1;
    if (right == -1) return -1;
    int left = 0;
    while (left <= right) {
        int m = (left + right) / 2;
        if (*(nums+m) == target) return m;
        else if (*(nums+m) > target) right = m - 1;
        else left = m + 1;
    }
    return -1;
}

//7.5 nothing to implement
// memory had been freed before accessed (weird_string() close => pop out of stack (along with its local memory))


//7.7 (before 7.6 since 7.6 has to modify the main function)
int countDuplicate(char str1[], int size1, char str2[], int size2) {
	//asume that str1 is shorter than str2
	//if not just swap them but im lazy >.<
	int c = 0;
	for (int i = 0; i < size2 - size1; i++) {
		if (strcmp(str1, str2+i) == 0) c++;
	}
	return c;
	// Welp doesnt work yet, im trying to mess up with strcmp()
}


//7.6  (modify the main function)
// code snip from BT06
//6.8
void print(vector<int> vec) {
	for (int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
	cout << endl;
}
void permute(vector<int> vec, int start, int end) {
	if (start == end) {
		print(vec);
	}
	for (int i = start; i <= end; i++) {
		swap(vec[start], vec[i]);
		permute(vec, start + 1, end);
		swap(vec[start], vec[i]); //backtracking
	}
}
void sub(int n) {
	vector<int> vec;
	for (int i = 1; i <= n; i++) vec.push_back(i);
	permute(vec, 0, vec.size() - 1);
}
int main(int argc, const char* argv[]) {
	//sub((int)(argv[1] - '0'));
	return 0;
}
