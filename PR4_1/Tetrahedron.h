#pragma once
#include "Figure.h"
#include <iostream>

using namespace std;

class Tetrahedron:
	public Figure
{
	double a;
public:
	Tetrahedron();
	Tetrahedron(double a);
	~Tetrahedron() {};

	virtual double Surface_area();
};

