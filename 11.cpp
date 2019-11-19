#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float PI = 3.14159265;
	float x = -2.34;
	float a = (abs(x - 5) - sin(x * PI / 180)) / 3 + sqrt(x * x + 2014) * cos(2 * x * PI / 180) - 3;
	cout << a;
}
