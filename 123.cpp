#include <iostream>
using namespace std;
int main() {
	int n, a, s=0;
	cin >> n;
	while (n>0) {
		a=n%10;
		s=s*10+a;
		n=n/10;
	}
	cout << s;
}
