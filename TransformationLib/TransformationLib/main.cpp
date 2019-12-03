/// <summary>
/// @Author Szymon Piskorz
/// @Date 25/11/2019
/// @Student No: c00242808
/// </summary>

#include <iostream>
#include "Matrix3.h"
#include "Vector3.h"
#include "Vector2.h"

int main()
{

	/////////////////Vector2/////////////////////////////////

	Vector2 A(0, 0);
	Vector2 B(A);
	Vector2 C;

	double vector2DoubleAns;

	//Lenght
	A = { 3.0f, 4.0f };
	std::cout << "Expected answer 5" << std::endl;
	std::cout << A.Length() << std::endl;

	//Lenght Squared
	A = { 3.0f, 4.0f };
	std::cout << "Expected answer 25" << std::endl;
	std::cout << A.LengthSquared() << std::endl;

	//Normalise
	A = { 3.0f, 4.0f };
	std::cout << "Expected answer ( 0.6, 0.8)" << std::endl;
	A.Normalise();
	std::cout << A.toString() << std::endl;

	//Add
	A = { 3.0f, 4.0f };
	B = { 4.0f, 4.0f };
	std::cout << "Expected answer (7, 8)" << std::endl;
	std::cout << (A + B).toString() << std::endl;

	//minus
	A = { 3.0f, 4.0f };
	B = { 4.0f, 4.0f };
	std::cout << "Expected answer (-1, 0)" << std::endl;
	std::cout << (A - B).toString() << std::endl;

	//Scalar prod of 2 vectors
	A = { 3.0f, 4.0f };
	B = { 4.0f, 4.0f };
	std::cout << "Expected answer 28" << std::endl;
	std::cout << A * B << std::endl;

	//product scalar by vector of double
	A = { 3.0f, 4.0f };
	std::cout << "Expected answer (6, 8)" << std::endl;
	std::cout << (A * 2.0).toString() << std::endl;

	//product scalar by vector of float
	A = { 3.0f, 4.0f };
	std::cout << "Expected answer (6, 8)" << std::endl;
	std::cout << (A * 2.0f).toString() << std::endl;

	//product scalar by vector of int
	A = { 3.0f, 4.0f };
	std::cout << "Expected answer (6, 8)" << std::endl;
	std::cout << (A * 2).toString() << std::endl;

	//vector product of vectors
	A = { 3.0f, 4.0f };
	B = { 4.0f, 4.0f };
	std::cout << "Expected answer (12, 16)" << std::endl;
	std::cout << (A ^ B).toString() << std::endl;
	
	/////////////////////////////////////////////////////////



	/////////////////Vector3/////////////////////////////////

	Vector3 A3(0, 0, 0);
	Vector3 B3(A3);
	Vector3 C3;

	double vector3DoubleAns;

	//Lenght
	A3 = { 5.0f, 3.0f, 8.0f };
	std::cout << "Expected answer 9.89949" << std::endl;
	std::cout << A3.Length() << std::endl;

	//Lenght Squared
	A3 = { 3.0f, 2.0f, 8.0f };
	std::cout << "Expected answer 77" << std::endl;
	std::cout << A3.LengthSquared() << std::endl;

	//Normalise
	A3 = { 9.0f, 4.0f, 5.0f };
	std::cout << "Expected answer ( 0.8148, 0.3621, 0.4527 )" << std::endl;
	A3.Normalise();
	std::cout << A3.toString() << std::endl;

	//Add
	A3 = { 3.0f, 4.0f, 5.0f };
	B3 = { 4.0f, 4.0f, 5.0f };
	std::cout << "Expected answer (7, 8, 10)" << std::endl;
	std::cout << (A3 + B3).toString() << std::endl;

	//minus
	A3 = { 3.0f, 4.0f, 9.0f };
	B3 = { 4.0f, 4.0f, 5.0f };
	std::cout << "Expected answer (-1, 0, 4)" << std::endl;
	std::cout << (A3 - B3).toString() << std::endl;

	//Scalar prod of 2 vectors
	A3 = { 3.0f, 4.0f, 5.0f };
	B3 = { 4.0f, 4.0f, 3.0f };
	std::cout << "Expected answer 43" << std::endl;
	std::cout << A3 * B3 << std::endl;

	//product scalar by vector of double
	A3 = { 3.0f, 4.0f, 2.0f };
	std::cout << "Expected answer (6, 8, 4)" << std::endl;
	std::cout << (A3 * 2.0).toString() << std::endl;

	//product scalar by vector of float
	A3 = { 3.0f, 4.0f, 2.0f };
	std::cout << "Expected answer (6, 8, 4)" << std::endl;
	std::cout << (A3 * 2.0f).toString() << std::endl;

	//product scalar by vector of int
	A3 = { 3.0f, 4.0f, 2.0f };
	std::cout << "Expected answer (6, 8, 4)" << std::endl;
	std::cout << (A3 * 2).toString() << std::endl;

	//vector product of vectors
	A3 = { 3.0f, 4.0f, 5.0f };
	B3 = { 4.0f, 4.0f, 1.0f };
	std::cout << "Expected answer (-16, 17, -4)" << std::endl;
	std::cout << (A3 ^ B3).toString() << std::endl;

	/////////////////////////////////////////////////////////


	/////////////////Matrix3/////////////////////////////////

	Matrix3 matrixA; //declare matrix
	Matrix3 matrixB; //declare matrix
	Vector3 vectorA{ 9,8,7 }; //declare vector
	Vector3 vectorB{ 6,5,4 }; //declare vector
	Vector3 vectorC{ 3,2,1 }; //declare vector

	//product of the matrix by a vector
	matrixA = { vectorA, vectorB, vectorC };
	std::cout << "Expected answer (  50,  32, 14 )" << std::endl;
	std::cout << (matrixA* vectorC).toString() << std::endl;

	//transpose

	std::cout << "Expected ans (9, 6, 3) \n\t     (8, 5, 2)\n\t     (7, 4, 1)" << std::endl;
	std::cout << (matrixA.Transpose(matrixA)).toString() << std::endl;

	//Add 2 matrices
	matrixA = { vectorA, vectorB, vectorC };
	matrixB = { vectorC,vectorA, vectorB };
	std::cout << "Expected ans (12, 10, 8) \n\t     (15, 13, 11)\n\t     (9, 7, 5)" << std::endl;
	std::cout << (matrixA+matrixB).toString() << std::endl;

	//difference of 2 matrices

	matrixA = { vectorA, vectorB, vectorC };
	matrixB = { vectorC,vectorA, vectorB };
	std::cout << "Expected ans (6, 6, 6) \n\t     (-3, -3, -3)\n\t     (-3, -3, -3)" << std::endl;
	std::cout << (matrixA - matrixB).toString() << std::endl;

	//product of the matrix by a scalar

	matrixA = { vectorA, vectorB, vectorC };
	std::cout << "Expected ans (27, 24, 21) \n\t     (18, 15, 12)\n\t     (9, 6, 3)" << std::endl;
	std::cout << (matrixA * 3.0).toString() << std::endl;

	// product of two matrix

	matrixA = { vectorA, vectorB, vectorC };
	matrixB = { vectorC,vectorA, vectorB };
	std::cout << "Expected ans (141, 117, 93) \n\t     (87, 72, 57)\n\t     (33, 27, 21)" << std::endl;
	std::cout << (matrixA * matrixB).toString() << std::endl;

	//determinant
	matrixA = { vectorA, vectorB, vectorC };
	matrixB = { 6, 5 ,4, 3, 5, 1, 9, 8, 7 };
	
	std::cout << "Expected ans 0" << std::endl;
	std::cout << (matrixA.Determinant(matrixA)) << std::endl;
	std::cout << "Expected ans 18" << std::endl;
	std::cout << (matrixB.Determinant(matrixB)) << std::endl;
	
	//row

	matrixA = { vectorA, vectorB, vectorC };

	std::cout << "Expected ans ( 8, 7, 6)" << std::endl;
	std::cout << (matrixA.Row(1)).toString() << std::endl;

	//col

	matrixA = { vectorA, vectorB, vectorC };

	std::cout << "Expected ans (7, 5, 3)" << std::endl;
	std::cout << (matrixA.Column(1)).toString() << std::endl;

	//inverse
	matrixB = { 6, 5 ,4, 3, 5, 1, 9, 8, 7 };


	matrixA = { vectorA, vectorB, vectorC };
	std::cout << "Expected ans (0, 0, 0) \n\t     (0, 0, 0)\n\t     (0, 0, 0)" << std::endl;
	std::cout << (matrixA.Inverse(matrixA)).toString() << std::endl;

	std::cout << "Expected ans (1.5, -0.166, -0.833) \n\t     (-0.66, 0.33, 0.33)\n\t     (-1.166, -0.166, 0.833)" << std::endl;
	std::cout << (matrixB.Inverse(matrixB)).toString() << std::endl;

	//rotation
	matrixA = { vectorA, vectorB, vectorC };
	std::cout << "Expected ans ( 0.866, 0.500, 0) \n\t     ( -0.500, 0.866, 0)\n\t     (0, 0, 1)" << std::endl;
	std::cout << (matrixA.Rotation(30)).toString() << std::endl;

	//translate
	matrixA = { vectorA, vectorB, vectorC };
	std::cout << "Expected ans ( 1, 0, 0) \n\t     ( 0, 1, 0)\n\t     (2, 2, 1)" << std::endl;
	std::cout << (matrixA.Translate(2, 2)).toString() << std::endl;

	//scale
	matrixA = { vectorA, vectorB, vectorC };
	std::cout << "Expected ans ( 0.02, 0, 0) \n\t     ( 0, 0.02, 0)\n\t     (0, 0, 1)" << std::endl;
	std::cout << (matrixA.Scale(2, 2)).toString() << std::endl;

	//-

	matrixA = { vectorA, vectorB, vectorC };
	std::cout << "Expected ans ( -9, -8, -7) \n\t     ( -6, -5, -4)\n\t     (-3, -2, -1)" << std::endl;
	std::cout << (matrixA.operator-()).toString() << std::endl;

	//rotationX
	matrixA = { vectorA, vectorB, vectorC };
	std::cout << "Expected ans ( 1, 0, 0) \n\t     ( 0, 0.866, -0.5)\n\t     (0, 0.5, 0.866)" << std::endl;
	std::cout << (matrixA.RotationX(30)).toString() << std::endl;

	////rotationY
	matrixA = { vectorA, vectorB, vectorC };
	std::cout << "Expected ans ( 0.866, 0, 0.5) \n\t     ( 0, 1, 0)\n\t     (-0.5, 0, 0.866)" << std::endl;
	std::cout << (matrixA.RotationY(30)).toString() << std::endl;

	////rotationZ
	matrixA = { vectorA, vectorB, vectorC };
	std::cout << "Expected ans ( 0.866, -0.500, 0) \n\t     ( 0.500, 0.866, 0)\n\t     (0, 0, 1)" << std::endl;
	std::cout << (matrixA.RotationZ(30)).toString() << std::endl;

	//Scale3D
	matrixA = { vectorA, vectorB, vectorC };
	std::cout << "Expected ans ( 1, 0, 0) \n\t     ( 0, 1, 0)\n\t     (0, 0, 1)" << std::endl;
	std::cout << (matrixA.Scale3D(100)).toString() << std::endl;


	/////////////////////////////////////////////////////////

	/////////////////////////////////////////////////////////
	 
	


	Vector3 test1(0, 2, -5);
	Vector3 test2(-2, -2, -5);
	Vector3 test3(2, -2, -5);

	/// <summary>
	/// lenght test1
	/// </summary>
	/// lenght squar test2
	/// <summary>
	/// matrix z rotation 23.21
	/// </summary>
	/// quat 
	/// <returns></returns>

	std::cout << "Phil tests" << std::endl;

	//Lenght
	std::cout << "test1 lenght " << std::endl;
	std::cout << test1.Length() << std::endl;

	//Lenght Squared
	std::cout << "test2 lenght squared" << std::endl;
	std::cout << test2.LengthSquared() << std::endl;


	//matrix z rotation
	std::cout << "test3 matrix 3 rotated by 23.21" << std::endl;
	std::cout << (matrixA.RotationZ(23.21)* test3).toString() << std::endl;

	/////////////////////////////////////////////////////////


	system("Pause");
	return 0;
}