#include <iostream>
using namespace std;
int main() {
	for (int i=1; i<=20; i++) {
		if (i%2==1) {
			for (int j=1; j<=10; j++) {
				cout << "1";
			} cout << endl;
		} else if (i%2==0) {
			for (int k=1; k<=10; k++) {
				cout << i;
			} cout << endl;
		}
	}
}
