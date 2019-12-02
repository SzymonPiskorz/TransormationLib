#pragma once

#pragma once

#include <iostream>
#include <cmath>
#include <string>

class Vector2
{
public:
	// The class has three variables x, y and z 
	double x;
	double y;

	// Constructor 1
	Vector2();

	// Constructor 2
	Vector2(double x1, double y1);
	// Constructor 3
	Vector2(Vector2& V);

	double Length() const;
	double LengthSquared() const;

	void Normalise();


	Vector2 operator+(Vector2 V2) const;

	Vector2 operator-(Vector2 V2) const;


	double operator*(Vector2 V2) const;

	Vector2 operator*(double k) const;

	Vector2 operator*(float k) const;

	Vector2 operator *(int k) const;

	Vector2 operator^(Vector2 V2) const;

	std::string toString() const;

};

