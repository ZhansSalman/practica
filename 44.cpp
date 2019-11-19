#include <iostream> 
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a != 10 && b != 10 && a%2 == 0) {
		int sum = a + b;
		cout << sum;
	} else {
		int mult = a*b;
		cout << mult;
	}
}
