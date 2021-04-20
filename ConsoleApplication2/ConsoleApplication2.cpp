// classes-IPBachvarov18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

class Point2D
{
public:
	//Parameterless constructor(ctor)
	Point2D()
	{
		cout << "Construtctor1" << endl;
		x = 0;
		y = 0;
	}

	Point2D(float newX, float newY)
	{
		cout << "Construtctor2" << newX << ", " << newY << endl;
		x = newX;
		y = newY;
	}

	~Point2D()
	{
		cout << "Destrcutor" << x << ", " << y << endl;
	}

	void toString()
	{
		cout << x << ", " << y << endl;
	}

private:
	float x;
	float y;
};
int main()
{
	Point2D p1;
	Point2D* p2 = new Point2D();
	Point2D* p3 = new Point2D(4.6, 5.8);

	p1.toString();
	p2->toString();
	p3->toString();

	delete p2;
	delete p3;
}

