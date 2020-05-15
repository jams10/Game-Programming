#pragma once

class Vector2D
{
public:
	Vector2D() = default; // Same as Vector2D(){}
	Vector2D( float x_in, float y_in );
	Vector2D operator+( const Vector2D& rhs ) const; // lhs Vector + rhs Vector
	Vector2D& operator+=( const Vector2D& rhs ); // In this time, lhs is modified so this method can't be const
	Vector2D operator*( float rhs )const; // scalar multiplication
	Vector2D& operator*=( float rhs );
	float GetX();
	float GetY();
private:
	float x;
	float y;
};