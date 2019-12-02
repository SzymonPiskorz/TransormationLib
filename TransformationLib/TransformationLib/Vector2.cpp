#include "Vector2.h"

// Constructor 1
Vector2::Vector2()
{
	x = 0.0f;
	y = 0.0f;
}

// Constructor 2
Vector2::Vector2(double x1, double y1)
{ // To allow other values for X, Y and Z to be declared
	x = x1;
	y = y1;
}

// Constructor 3
Vector2::Vector2(Vector2& V)
{  // To allow other values for X, Y and Z to be declared
	x = V.x;
	y = V.y;
}

double Vector2::Length() const
{  // A method to return the length of the vector
	return (double)sqrt(x * x + y * y);
}
double Vector2::LengthSquared() const
{  // A method to return the length squared of the vector
	return (x * x + y * y);
}

void Vector2::Normalise()
{  // A method to reduce the length of the vector to 1.0 
	// keeping the direction the same
	if (Length() > 0.0)
	{  // Check for divide by zero
		double magnit = Length();
		x /= magnit;
		y /= magnit;
	}
}




Vector2 Vector2::operator+(Vector2 V2) const
{  // An overloaded operator + to return the sum of 2 vectors
	return { x + V2.x, y + V2.y};
}

Vector2 Vector2::operator-(Vector2 V2) const
{ // An overloaded operator - to return the difference of 2 vectors
	return { x - V2.x, y - V2.y};
}


double Vector2::operator*(Vector2 V2) const
{// An overloaded operator * to return the scalar product of 2 vectors
	return (x * V2.x + y * V2.y);
}

Vector2 Vector2::operator*(double k) const
{// An overloaded operator * to return the product of a scalar by a vector
	return { x * (float)k, y * (float)k};
}

Vector2 Vector2::operator*(float k) const
{// An overloaded operator * to return the product of a scalar by a vector
	return { x * k, y * k};
}

Vector2 Vector2::operator *(int k) const
{// An overloaded operator * to return the product of a scalar by a vector
	return { x * k, y * k};
}

Vector2 Vector2::operator^(Vector2 V2) const
{// An overloaded operator ^ to return the vector product of 2 vectors
	return { x * V2.y , y * V2.x };
}

std::string Vector2::toString() const
{
	return "(" + std::to_string(x) + "," + std::to_string(y) + ")";
}
