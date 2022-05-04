#include "Figure.h"
#include "Bullet.h"
#include "Parallelepiped.h"
#include "Tetrahedron.h"

int main()
{
	Bullet a(4);
	cout << "The Surface area of the Bullet is : " <<
		a.Surface_area() << endl;

	Parallelepiped b(4, 2, 8);
	cout << "The Surface area of the Parallelepiped is : " <<
	b.Surface_area() << endl;

	Tetrahedron c(3);
	cout << "The Surface area of the Tetrahedron is : " <<
		c.Surface_area() << endl;

	cout << endl;
	Figure* array[4];


	array[1] = &a;
	cout << "The Surface area of the Bullet is : " << array[1]->Surface_area() << endl;

	array[0] = &b;
	cout << "The Surface area of the Parallelepiped is : " << array[0]->Surface_area() << endl;

	array[2] = &c;
	cout << "The Surface area of the Tetrahedron is : " << array[2]->Surface_area() << endl;
}