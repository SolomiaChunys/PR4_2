#include "Tetrahedron.h"
#include <iostream>

using namespace std;

Tetrahedron::Tetrahedron()
	: a(0)
{}

Tetrahedron::Tetrahedron(double a)
	: a(a)
{}

double Tetrahedron::Surface_area()
{
	return pow(a, 2) * sqrt(3);
}