#include <iostream> 
using namespace std;

int main() {
	int con, pech;
	cin >> con >> pech;
	int one = con*0.3 + pech*0.4;
	int three = 3*(con*2 + pech*1.8);
	cout << one << " " << three;
}
