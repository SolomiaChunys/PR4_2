#include "Bullet.h"
#include <iostream>

using namespace std;

Bullet::Bullet()
	: r(0)
{}

Bullet::Bullet(double r)
	: r(r)
{}

double Bullet::Surface_area()
{
	return 4 * pi * pow(r, 2);
}