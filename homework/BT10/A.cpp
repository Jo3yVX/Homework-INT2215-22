#include <iostream>
#include <string>

using namespace std;

//A4
//địa chỉ của x là địa chỉ của cấu trúc point
//địa chỉ của y là kế tiếp địa chỉ của x

//A5

struct Point
{
	double x;
	double y;
};

void print1(Point p)
{
	cout << "(" << p.x << "," << p.y << ")";
}

void print2(Point *p)
{
	cout << "(" << p->x << "," << p->y << ")";
}

Point mid_point(const Point point1, const Point point2)
{
	Point new;
	new.x = (point1.x + point2.x) / 2;
	new.y = (point1.y + point2.y) / 2;
	return new;
}

int main()
{
	Point point;
	cout << &point << endl;
	cout << &(point.x) << endl;
	cout << &(point.y) << endl;
}

