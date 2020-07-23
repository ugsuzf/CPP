#include <iostream>
#include <string>
using namespace std;

int main() {
	double height;
	double weight;
	double bodymass;

	cout << "Enter your height : ";
	cin >> height;
	cout << "Enter your weight : ";
	cin >> weight;
	bodymass = weight / (height * height);
	cout << "Your BMI is : " << bodymass;

}
