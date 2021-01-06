#include <iostream>
#include "../header/rectangle.h"

using namespace std;

int main()
{
	Rectangle r1, r2;

	r1.set_width(3);
	r1.set_height(4);

	r2.set_width(4);
	r2.set_height(2);

	cout << "Rectangle 1 area: " << r1.area() << endl;
	cout << "Rectangle 2 area: " << r2.area() << endl;
	return 0;
}
