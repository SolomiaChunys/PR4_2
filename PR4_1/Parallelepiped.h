#pragma once
#include "Figure.h"
#include <iostream>

using namespace std;

class Parallelepiped:
	public Figure
{
	double x, y, z;
public:
	Parallelepiped();
	Parallelepiped(double, double, double);
	~Parallelepiped() {};

	virtual double Surface_area();
};

