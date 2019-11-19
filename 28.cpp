#include <iostream>
using namespace std;

int main() {
	int s, per, sum = 0;
	cin >> s >> per;
	for(int i = 1; i <=5; i++) {
		sum += s + ((per*100)/s);
	}
	cout << sum;
}
