#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	float x, y;
	cin >> x >> y;
	if (x >= 0 && y >= 0) {
		float sq = x - sqrt(y);
		if (sq >= 0) {
			float sqr = sqrt(sq);
			cout << sqr;
		} else {
			cout << "Can not be calculated!";
		}
	} else {
		cout << "Your variables are invalid!";
	}
}
