

#include <iostream>
#include <cmath>
#include "Header.h"

using namespace std;




int main()
{
	cout << "What math operation would you like to do?\n1. Area of Triangle\n2. Root Solver\n3. Area of Circle\n4. Volume of a Cylinder\n5. Area of Trapezoid\n6. Pythagorean Theorem\n7. Volume of Sphere\n8. Volume of Cone\n9. Slope between points\n10. Distance between points\n11. Velocity\n";
	cin >> choice;
	switch (choice) {
	case 1:
		triangle();
		break;

	case 2:
		rootSolver();
		break;

	case 3:
		circleArea();
		break;

	case 4:
		cylinderVolume();
		break;

	case 5:
		trapezoid();
		break;

	case 6:
		pyth();
		break;

	case 7:
		volSphere();
		break;

	case 8:
		volCone();
		break;

	case 9:
		slope();
		break;

	case 10:
		distance();
		break;

	case 11:
		speed();
		break;

	case 12:
		volCone();
		break;
	}

	system("pause");

	return 0;
}




