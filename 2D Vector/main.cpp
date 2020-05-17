#include <iostream>
#include "Vector2D.h"

int main( int argv, char* argc[] )
{
	// Sum
	Vector2D v1( 10.0f, 20.0f );
	Vector2D v2( -2.0f, 8.0f );
	Vector2D v3 = v1 + v2;
	std::cout << v3.GetX() << ' ' << v3.GetY() << std::endl;

	v3 += v1;
	std::cout << v3.GetX() << ' ' << v3.GetY() << std::endl;

	// Scalar
	Vector2D v3 = v1 * 0.5f;
	std::cout << v3.GetX() << ' ' << v3.GetY() << std::endl;

	v3 *= 0.5f;
	std::cout << v3.GetX() << ' ' << v3.GetY() << std::endl;

	// Subtraction
	std::cout << (v2 - v1).GetX() << (v2 - v1).GetY() << std::endl;

	// Get distance between two vectors
	float dist = .0f;
	dist = (v2 - v1).GetLength();
	std::cout << dist << std::endl;
}
