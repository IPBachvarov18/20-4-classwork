#include <iostream>
#include<string>
using namespace std;

class Point2D
{
public:
	const float offset = 1;
	//Parameterless constructor(ctor)
	Point2D()
	{
		cout << "Construtctor1" << endl;
		xCord = 0;
		yCord = 0;
	}

	Point2D(float newX, float newY)
	{
		cout << "Construtctor2" << newX << ", " << newY << endl;
		xCord = newX;
		yCord = newY;
	}

	Point2D(const Point2D& p)
	{
		cout << "Copy constructor";
		xCord = p.xCord;
		xCord = p.yCord;
	}
	~Point2D()
	{
		cout << "Destrcutor" << xCord << ", " << yCord << endl;
	}

	void toString()
	{
		cout << xCord << ", " << yCord << endl;
	}

	//Predefined operator +
	Point2D operator+(Point2D& otherPoint)
	{
		this->xCord += otherPoint.xCord;
		this->yCord += otherPoint.yCord;

		return *this;
	}

	__declspec(property(put = setX, get = setX)) float x;
	void setX(float newValue)
	{
		cout << setX << endl;
		if (newValue < -200)
		{
			throw "Invalid X coordinant";
		}
		xCord = newValue;
	}
	float getX()
	{
		cout << "getX" << endl;
		return xCord;
	}
	float setY(float newValue)
	{
		yCord = newValue;
	}
	float getY()
	{
		cout << "getY" << endl;
		return yCord;
	}
private:
	float xCord;
	float yCord;
};

Point2D dump(Point2D p)
{
	p.toString();
	return p;
}
int main()
{
	Point2D p1;
	Point2D pp1;
	Point2D pp2;
	Point2D pp3;
	Point2D* p2 = new Point2D();
	Point2D* p3 = new Point2D(4.6, 5.8);

	//Homework
	//if (pp1>=pp2)
	//{

	//}

	pp1.setX(15);
	pp1.setY(35);

	pp1.toString();

	try {
		pp1.x = -600;
		cout << pp1.x << endl;
	}
	catch (const char* msg)
	{
		cout << msg;
	}
	

	delete p2;
	delete p3;
}