#include <iostream>
#include <cmath>
using namespace std;
int main() {
		float a=0.1, b=0.2, x=1;
		float y = pow((x*x+b), 0.2) - (b*b*pow(sin(x+a), 3))/x;
		cout << y; 
}
