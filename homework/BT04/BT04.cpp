#include <iostream>
#include <algorithm>
using namespace std;


//BT04.6
void threeSum() {
	int n; cin >> n;
	int* arr = new int[n];
	int l, r;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < n - 2; i++) {
		l = i + 1;
		r = n - 1;
		while (l < r) {
			if (arr[i] + arr[l] + arr[r] == 0) {  // 0 can be changed into any number. 
				cout << arr[i] << " " << arr[l] << " " << arr[r] << endl;  
				return;
			}
			else if (arr[i] + arr[l] + arr[r] < 0) l++;
			else r--;
		}
	}
	delete[] arr;
	return;
}

//BT04.08
void sx() {
	int n; cin >> n;
	bool flag = true;
	int* nam = new int[n];
	int* nu = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> nam[i] >> nu[i];
		if (nam[i] < nu[i]) flag = false;
	}
	if (flag == true) {
		cout << "YES";
		return;
	}
	sort(nam, nam + n);
	sort(nu, nu + n);
	for (int i = 0; i < n; i++) {
		if (nam[i] < nu[i]) {
			cout << "NO";
			return;
		}
	}
	cout << "YES";
	return;
}

int main() {
	//threeSum();
	//sx();
	return 0;
}