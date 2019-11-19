#include <iostream>
using namespace std;

int main() {
	int month = 30, day, week, year, week1 = 7, year1;
	cin >> week;
	day = week*week1;
	cout << "Days in " << week << " weeks: " << day;
	cin >> year;
	day = month*year*12;
	cout << "Days in " << year << " years: " << day;
}
