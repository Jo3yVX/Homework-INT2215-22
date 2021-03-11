#include <iostream>
using namespace std;

//8.1
// x and y have the same address in memory.
// main function first calls f() -> push f in top of stack -> f's returns address and its local variables store here
// f is done -> pop f and its memories out -> push g in top of stack -> do the same process
// so f and g is the only one in the top of stack at theirs execution time
// x is the first variable of f, y is the first var if g
// so x and y will likely be located in the same address
void f(int xval)
{
	int x;
	x = xval;
	cout << &x << endl;
}
void g(int yval)
{
	int y;
	cout << &y << endl;

}

//8.2




//8.3
void swap_pointer(char*& x, char*& y) {
	char* tmp = NULL;
	tmp = x;
	x = y;
	y = tmp;
}
// Passing pointers by value cant change the value of pointers
// So we need to pass pointers by reference



int main() {

	return 0;
}