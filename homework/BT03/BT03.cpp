#include <iostream>
#include <string>
#include <vector>
using namespace std;


//BT03.1
void findN() {
	int n; cin >> n;
	bool seen[10001];
	for (int i = 0; i < n; i++) {
		seen[i] = false;
	}
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		if (seen[t]) {
			cout << "Yes";
			return;
		}
	}
	cout << "No";
	return;
}


//BT03.2
void dx() {
	string str;
	cin >> str;
	int l = 0, r = str.size() - 1;
	while (l < r) {
		if (str[l] != str[r]) {
			cout << "NO";
			return;
		}
	}
	cout << "YES";
	return;
}

//BT03.03 convert int to string with to_string() function

//BT03.04
int cal(bool** map, const int &r,const int &c) {
	int mine = 0;
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			if (map[r + i][c + j]) mine++;
		}
	}
	return mine;
}
void mine() {
	//create map with row+1 rows, col+1 columns and fills with false.
	int row, col; cin >> row >> col;
	bool** map = new bool* [row+2];
	for (int i = 0; i < row + 2; i++) {
		map[i] = new bool[col + 2];
		for (int j = 0; j < col + 2; j++) {
			map[i][j] = false;
		}
	}
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			char t; cin >> t;
			if (t == '*') map[i][j] = true;
		}
	}
	//print out map
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			if (map[i][j]) cout << '*';
			else cout << cal(map, i, j);
		}
		cout << endl;
	}
	//release memory
	for (int i=0; i < row + 2; i++) {
		delete [] map[i];
	}
	delete [] map;
	return;
}


int main() {
	//add function(s) here to test
	return 0;
}
