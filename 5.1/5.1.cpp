// Lab 5_1

#include <iostream>
#include <cmath>

using namespace std;

double k(const double x, const double y); // прототип

int main()
{
	double p, q;
	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;
	double c = (k(1 + pow(p, 2), 1 - pow(q, 2)) - pow(k(1, p * q), 2)) / (1 + k(p * q, 1));
	cout << "c = " << c << endl;
	system("pause");
}

double k(const double x, const double y) // визначення
{
	return (round(((sin(x) / (pow(x, 2) + pow(y, 2))) + (cos(y) / (1 + abs(x * y)))) * 1000000) / 1000000);
}