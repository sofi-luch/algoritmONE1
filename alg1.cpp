/**************************
* Автор: Лучникова София  *
* Вариант 2               *
* ************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //declaring variables
	double alpha, radalpha, g, p, a, b, c, x1, x2, x3;
	const double pi = 3.14;

	//entering variables from the user's keyboard
	cout << "a = ";
	cin >> a;
	
	cout << "b = ";
	cin >> b;
	
	cout << "c = ";
	cin >> c;

	//from given
	g = c / a;
	p = b / a;

	//finding the alpha angle and converting it into radians
	alpha = acos(g / (2 * sqrt(pow(-p / 3, 3))));
	radalpha = alpha * (pi / 180);

	//finding the intersection points of the trajectory with the abscissa axis
	x1 = 2 * sqrt(-p / 3) * cos(alpha / 3);
	x2 = -2 * sqrt(-p / 3) * cos((alpha + pi) / 3);
	x3 = -2 * sqrt(-p / 3) * cos((alpha - pi) / 3);

	//outputting the found intersection points
	cout << "x1 = " << x1 << endl
		 << "x2 = " << x2 << endl
		 << "x3 = " << x3 << endl;

	return 0;
}
