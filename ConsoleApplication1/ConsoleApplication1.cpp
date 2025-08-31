#include <iostream>
using namespace std;

void Metrical_sys();
void Imperial_sys();

int main(){
	int choose;

	cout << "choose 1 for Metric or 2 for imperial: ";
	cin >> choose;

	switch (choose){
		case 1:	Metrical_sys();
			break;
		case 2: Imperial_sys();
			break;
	}

	return 0;
}

void Metrical_sys() {
	int foot;
	float inch, meter;
	cout << "Enter the distance in Feet and Inches\n";
	cout << "Feet: ";
	cin >> foot;
	cout << "Inches: ";
	cin >> inch;

	meter = (foot * 0.3048) + (inch * 0.0254);

	cout << "The distance in meters is: " << meter << " meters\n";
}

void Imperial_sys() {
	int foot;
	float inch, meter;
	cout << "Enter the distance in Meters\n";
	cout << "Meters: ";
	cin >> meter;

	foot = meter / 0.3048; 
	inch = (meter - (foot * 0.3048)) / 0.0254;

	cout << "The distance in Feet and Inches is: " << foot << " feet and " << inch << " inches\n";
	
}