
#include <iostream>
#include <cmath>

int main()
{

    double x, y, alpha, g, p;
    const double pi = 3.14;
    double a = 0.52, b = -3.552, c = 3.24;
    y = a * x * *2 + b * x + c;

    g = c / a;
    p = b / a;

    alpha = arccos(g / (2 * sqrt((-p / 3) * *3)));

    double x1, x2, x3, radianalpha;
    radianalpha = alpha * (pi / 180);

    x1 = 2 * sqrt(-(p / 3)) * cos(radianalpha / 3);
    x2 = -2 * sqrt(-(p / 3)) * cos(radianalpha + pi / 3);
    x3 = -2 * sqrt(-(p / 3)) * cos(radianalpha - pi / 3);

    return 0; 

}