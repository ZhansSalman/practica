#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int days;
	float disc, sum;
	cin >> days >> disc >> sum;
	for (int i=1; i<=days; i++) {
		sum=sum+3;
		sum=sum+(sum*disc/100);
	}
	cout << sum;
}
