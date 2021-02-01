#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a, b;
	cin >> a >> b;
	cout << "The hypothenuse is: " << sqrt(a*a + b*b) << endl;

	// Wait for Enter
	cin.get();
	cin.get();
	return 0;
}