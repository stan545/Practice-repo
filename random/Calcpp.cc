//This programs converts from feet to Meters
#define METERS_PER_FOOT 0.3048
#include <iostream>
using namespace std;

double feet_to_meters (double x){
	return x * METERS_PER_FOOT;
}

int main () {
	double distance_feet;
	double distance_meters;

	cout << "Enter distance in feet: ";
	cin >> distance_feet;
	distance_meters = feet_to_meters(distance_feet);
	cout << distance_meters << endl;
}

