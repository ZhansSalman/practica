#include <iostream>
using namespace std;

int main() {
	float time, dist;
	cin >> time >> dist;
	float timeinM = time/60;
	float speed = (dist/timeinM) / 3.6;
	cout << speed;
}
