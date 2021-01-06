#include <iostream>
#include "../header/rectangle.h"

using namespace std;

int main()
{
	Rectangle r;
	r.set_width(15);
	r.set_height(30);
	cout << "Rectangle area: " << r.area() << endl;
	return 0;
}
