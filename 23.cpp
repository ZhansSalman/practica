#include <iostream>
using namespace std;

int main() {
	float x, a, y, k;
	cin >> x >> a;
	cin >> y;
	float cena = (y*a)/x;
	cin >> k;
	float massa = (k*x)/a;
	cout << cena << " " << massa;
}
