#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float x = 3.6;
	float PI = 3.14159265;
	float e = 2.718281;
	float a = pow(e, x - 2) + abs(sin(x * PI /180)) - pow(x, 4) * cos(1/(x * PI /180));
	cout << a; 
}
