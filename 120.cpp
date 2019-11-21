#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n;
	m=n%10;
	n=n/10;
	while(n>0) {
		if (n%10 > m) 
		m=n%10;
		n=n/10;
	}
	cout << m;
}
