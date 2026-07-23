// Създайте функции, които приемат координатите на три точки:
//  - getPerimeter - Намира обиколката на триъгълника дефиниран от тях
//  - getArea - Намира лицето на триъгълника дефиниран от тях
//  - isInCircleWithRadius - Проверява дали триъгълникът дефиниран от тях се намира изцяло в окръжност с радиус r и център (0, 0). 
//    Радиусът се подава като параметър на функцията.
// Направете валидация на входа!
// Следете за повторение на код. Може да се наложи да обособите повече от две функции!

#include <iostream>

using namespace std;

double myAbs(double value) {
    return (value < 0) ? -value : value;
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double getPerimeter(double x1, double y1, double x2, double y2, double x3, double y3) {
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);
    return a + b + c;
}

double getArea(double x1, double y1, double x2, double y2, double x3, double y3) {
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);
    double s = (a + b + c) / 2;

    return sqrt(s * (s - a) * (s - b) * (s - c));
}

bool isInCircleWithRadius(double x1, double y1, double x2, double y2, double x3, double y3, double r) {
    return (myAbs(x1) <= r && myAbs(y1) <= r) &&
           (myAbs(x2) <= r && myAbs(y2) <= r) &&
           (myAbs(x3) <= r && myAbs(y3) <= r);
}

int main() {
    double x1, y1, x2, y2, x3, y3, r;

    cout << "Enter coordinates of the first point (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of the second point (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter coordinates of the third point (x3 y3): ";
    cin >> x3 >> y3;
    cout << "Enter radius of the circle: ";
    cin >> r;

    if (r < 0) {
        cout << "Invalid radius!" << endl;
        return 1;
    }

    double perimeter = getPerimeter(x1, y1, x2, y2, x3, y3);
    double area = getArea(x1, y1, x2, y2, x3, y3);
    bool inCircle = isInCircleWithRadius(x1, y1, x2, y2, x3, y3, r);

    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
    cout << "Is in circle with radius " << r << ": " << (inCircle ? "Yes" : "No") << endl;

    return 0;
}