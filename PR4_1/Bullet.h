#pragma once
#include <iostream>
#include "Figure.h"

using namespace std;

class Bullet:
	public Figure
{
	double r;
	double pi = 3.14;
public:
	Bullet();
	Bullet(double r);
	~Bullet() {};

	virtual double Surface_area();
};

