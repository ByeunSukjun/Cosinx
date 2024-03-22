#include <iostream>
using namespace std;
void main() {
    float a, b, dt, t, num, anal, PI;
    // differentiation
    PI = 3.14;
    cout << "a b ? =";
    cin >> a >> b;
    cout << "t, dt ? =";
    cin >> t >> dt;
    anal = a * b * cos(b * t);
    num = a * (sin(b * (t + dt)) - sin(b * t)) / dt;
    cout << "num" << num << "anal" << anal << endl;
    cout << "error =" << (num - anal) / anal * 100 << "%\n";


    float c, d;
    int N;
    cout << "c d N =";
    cin >> c >> d >> N;
    anal = a * (cos(b * c) - cos(b * d)) / b;
    dt = (c - d) / N;
    num = 0;
    for (int i = 0; i < N; i++) {
        num += -a * sin(b * (d + dt * i)) * dt;
    }
    cout << "num" << num << "anal" << anal << endl;
    cout << "error =" << (num - anal) / anal * 100 << "%";
}