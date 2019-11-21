#include <iostream>
using namespace std;
int main() {
	int n, c=0, m;
	cin >> n;
	while (n>0) {
		m=n%10;
		n=n/10;
		if (m>3 && m<8) {
			c++;
		}
	}
	cout << c;
}
