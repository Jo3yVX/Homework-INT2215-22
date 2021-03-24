#include <iostream>
using namespace std;

string concat(const char* a, const char* b) {
	string res = a;
	res += b;
	return res;
}

/*
 int* p = new int;  
 int* p2 = p;
 *p = 10;
 delete p;
*p2 = 100;      // Loi khi truy cap vao vung nho da duoc released
 cout << *p2;   
 delete p2;	   // Loi do vung nho p2 tro den da dc released

*/

/*
char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a';
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete c;			// C khong duoc cap phat dong (boi operator new) nen khong dung delete cho C duoc
cerr << "a after deleting c:" << "-" << a << "-" << endl;
*/

void test() {
	int x = 10;
	int* y = &x;
	delete y; // Loi khi access den heap memory 
	return;
}

int main() {
	test();
	return 0;
}