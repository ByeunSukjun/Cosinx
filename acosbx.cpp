#include <iostream>
using namespace std;
void main() {
	float a, b, dx, x, num, anal, PI;
	PI = 3.1415926;
	cout << "a b? = ";
	cin >> a >> b;
	cout << "x dx? = ";
	cin >> x >> dx;
	x = x * PI / 180;
	anal = -a * b * sin(b * x);
	num = a * (cos(b * (x + dx)) - cos(b * x)) / dx;
	cout << " num " << num << " anal " << anal << endl;
	cout << "error = " << (num - anal) / anal * 100 << "\n";


	float c, d;
	int N;
	cout << "c d N = ";
	cin >> c >> d >> N;
	c = c * PI / 180;
	d = d * PI / 180;
	anal = a * (sin(b * c) - sin(b * d)) / b;
	dx = (c - d) / N;
	num = 0;
	for (int i = 0; i < N; i++) {
		num += a * cos(b * (d + dx * i)) * dx;
	}
	cout << "num " << num << " anal " << anal << endl;
	cout << " error = " << ( num - anal ) / anal * 100 << "%\n";
}
