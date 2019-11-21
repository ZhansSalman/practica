#include <iostream>
using namespace std;
int main() {
	int c=0;
	int n;
	while (n!=0) {
		cin >> n;
		if (n%2==0) {
			c++;
		}
	}
	cout << c-1;
}
