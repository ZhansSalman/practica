#include <iostream> 
using namespace std;
int main() {
	int a, b, c, sum = 0;
	cin >> a >> b >> c;
	if (a%5 == 0 && b%5 == 0 && c%5 == 0) {
		sum = a+b+c;
		cout << sum;
	} else if (a%5 == 0 && b%5 == 0 ) {
		sum = a+b;
		cout << sum;
	} else if (a%5 == 0 && c%5 == 0) {
		sum = a+c;
		cout << sum;
	} else if (b%5 == 0 && c%5 == 0) {
		sum = b + c;
		cout << sum;
	} else {
		cout << "error";
	}
}
