#include <iostream> 
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a >= 2 && a <= 5) {
		a = a+10;
		cout << a;
	} else if (a > 7 && a< 40) {
		a = a-100;
		cout << a;
	} else if (a < 0 && a > 3000) {
		a = a*3;
		cout << a;
	} else {
		a = 0;
		cout << a;
	}
}
