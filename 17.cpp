#include <iostream> 
using namespace std;

int main() {
	
	int a, b, c;
	cin >> a >> b >> c;
	int mean = (a+b+c)/2;
	int x = 2*a - 2*b - 3*c;
	cout << mean << " " << x;
}
