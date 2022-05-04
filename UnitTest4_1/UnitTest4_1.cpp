
#define CATCH_CONFIG_MAIN
#include "C:\users\Solomia_\source\repos\PR4_1\PR4_1\Bullet.h"
#include "C:\users\Solomia_\source\repos\PR4_1\PR4_1\Bullet.cpp"

TEST_CASE("Arguments initialized")
{
	Bullet a(2);
	REQUIRE(a.Surface_area() == 100.48);
}
