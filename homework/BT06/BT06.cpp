#include <iostream>
#include <string>
#include <vector>
using namespace std;

//6.5: fibonacci (iteratively)
long F(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	int f0 = 0, f1 = 1;
	int fn;
	for (int i = 2; i <= n; i++) {
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}
	return f1;
}

//6.6
int rec(int n) {
	int arr[1000000];
	return rec(n - 1);
}

//6.7
// start = 0, end = s.size() - 1
void permutation(string s, int start, int end) {
	if (start == end) {
		cout << s << endl;
	}
	for (int i = start; i <= end; i++) {
		swap(s[start], s[i]);
		permutation(s, start + 1, end);
		swap(s[start], s[i]); //backtracking
	}
}

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


int main() {

	return 0;
}