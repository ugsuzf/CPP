#include <iostream>
using namespace std;
int main() {
	int c;
	int n = 1;
	int sum = 0;
	int max = 0;
	while (true)
	{
		cin >> c;
		int num = c;
		while (num!=0)
		{
			sum += num % 10;
			num = num / 10;
		}
		if (c==0)
		{
			break;
		}
		if (sum>max)
		{
			max = sum;
		}
		sum = 0;
	}
	cout << "max sum of digits was " << max;
}