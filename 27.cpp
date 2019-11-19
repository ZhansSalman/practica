#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int x = a;
	int y = b;
	int z = c;
	a = a+b;
	b = c-x;
	c = c+x+y;
	
	cout << a << " " << b << " " << c;
}
