#include <iostream>
using namespace std;

int main() {
	
	int a, b, c,max=0;
	cout << "Enter 3 positive number " << endl;
	cin >> a >> b >> c;
	if (a>max)
	{
		max = a;
	}
	if (b>max)
	{
		max = b;
	}
	if (c>max)
	{
		max = c;
	}


	for (int i = max; i >0 ; i--)
	{
		if (i<=a)
		{
			cout << "*";
		}
		else {
			cout << " ";
		}
		if (i<=b)
		{
			cout << "*";
		}
		else
		{
			cout << " ";
		}
		if (i<=c)
		{
			cout << "*";
		}
		else
		{
			cout << " ";
		}
		cout << endl;
	}
}