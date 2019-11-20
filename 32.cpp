#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int y=237;
	int x3=y%10;
	y=y/10;
	int x2=y%10;
	y=y/10;
	int x1=y;
	cout << x2 << x3 << x1; 
}
