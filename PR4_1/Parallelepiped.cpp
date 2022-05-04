#include "Parallelepiped.h"
#include <iostream>

using namespace std;

Parallelepiped::Parallelepiped()
	: x(0), y(0), z(0)
{}

Parallelepiped::Parallelepiped(double x, double y, double z)
	: x(x), y(y), z(z)
{}

double Parallelepiped::Surface_area()
{
	return 2*(x*y+x*z+y*z);
}
