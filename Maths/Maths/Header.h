#pragma once

#pragma once
#include <vector>
#include <iostream>


using namespace std;

double pi = 3.141592;
int choice;

void triangle()
{
	double b, h;
	cout << "What is the base of the Triangle\n";
	cin >> b;
	cout << "What is the height of the triangle\n";
	cin >> h;
	cout << "The area of the triangle is: " << (b * h) / 2 << endl;

}

void rootSolver()
{
	double a, b, c;
	double roots[2] = {};

	cout << "What is A, B, and, C\n";
	cin >> a >> b >> c;

	roots[0] = (-b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
	roots[1] = (-b - (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);

	cout << "Your roots are: " << roots[0] << " and " << roots[1] << endl;

}

void circleArea() {
	double r;
	cout << "What is the radius?\n";
	cin >> r;
	cout << "The area of your circle is: " << pi * pow(r, 2);
}

void cylinderVolume() {
	double r, h;
	cout << "What is the radius and height of the cylinder\n";
	cin >> r >> h;
	cout << "The volume of the cylinder is: " << pi * pow(r, 2) * h;
}

void trapezoid() {

	double b1;
	double b2;
	double h;

	cout << "What are the 2 bases?\n";
	cin >> b1 >> b2;
	cout << "What is the height?\n";
	cin >> h;
	cout << "Your Trapezoid's area is: " << ((b1 + b2) / 2) * h;
}

void pyth() {
	double a, b;
	cout << "What are the legs of the Triangle?\n";
	cin >> a >> b;
	cout << "The hypotenuse is: " << sqrt(pow(a, 2) + pow(b, 2));
}

void volSphere() {
	double r;
	cout << "What is the Radius?\n";
	cin >> r;
	cout << "The Volume of your Sphere is: " << (static_cast<double>(4.0 / 3.0) * pi * (pow(r, 3)));
}

void volCone() {
	double r;
	double h;
	cout << "What is the radius and height?\n";
	cin >> r >> h;
	cout << "Your cone's volume is: " << (1.0 / 3.0) * pi * pow(r, 2) * h;
}

void slope() {

	double x1;
	double y1;
	double x2;
	double y2;
	cout << "What is point 1 x and y?\n";
	cin >> x1 >> y1;
	cout << "What is point 2 x and y?\n";
	cin >> x2 >> y2;
	cout << "The slope is: " << (y2 - y1) / (x2 - x1);


}

void distance() {
	double x1;
	double y1;
	double x2;
	double y2;
	cout << "What is point 1 x and y?\n";
	cin >> x1 >> y1;
	cout << "What is point 2 x and y?\n";
	cin >> x2 >> y2;
	cout << "The distance between these points is: " << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

}

void speed() {

	double d;
	double t;
	cout << "How far did you travel?\n";
	cin >> d;
	cout << "How long did it take?\n";
	cin >> t;
	cout << "Your speed was: " << d / t;
}

void average() {



}