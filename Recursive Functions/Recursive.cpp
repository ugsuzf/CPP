#include <iostream>
using namespace std;
int gcdRec(int a, int b) {
	if (a == 0)
		return b;
	if (b == 0)
		return a;

	// base case 
	if (a == b)
		return a;

	// a is greater 
	if (a > b)
		return gcdRec(a - b, b);
	return gcdRec(a, b - a);
}
int sumDigits(int n) {
	int sum = 0;
	int temp;
	while (n > 0)
	{
		temp = n % 10;
		sum = sum + temp;
		n = n / 10;
	}
	return sum;
}
int numDigits(int n)
{
	if (n == 0)
		return 0;
	return 1 + numDigits(n / 10);
}
void printOddEven( int n)
{	
	int x = (n%2==0?2:1);
	if (x == 2) {
		for (int i = 2; i <= n; i++)
		{
			if (i%2==0)
			{
				cout << i << " ";
			}
		}
		
	}
	if (x==1)
	{
		for (int i = 1; i <= n; i++)
		{
			if (i % 2 == 1)
			{
				cout << i << " ";
			}
		}
	}
	
}
void hailstone(int n)
{
	
	while (n != 1)
	{
		cout << n << " ";

		 
		if (n & 1)
			n = 3 * n + 1;

		
		else
			n = n / 2;
	}

	cout << n;
}



int main() {
	std::cout << "gcdRec(12, 42) = " <<
		gcdRec(12, 42) << std::endl
		<< "gcdRec(12, 25) = " <<
		gcdRec(12, 25) << std::endl;
	std::cout << "sumDigits(123) = " <<
		sumDigits(123) << std::endl
		<< "sumDigits(971) = " <<
		sumDigits(971) << std::endl;
	std::cout << "numDigits(12345) = " <<
		numDigits(12345) << std::endl
		<< "numDigits(971) = " <<
		numDigits(971) << std::endl;
	std::cout << "printOddEven(15): ";
	printOddEven(15);
	std::cout << std::endl;
	std::cout << "printOddEven(14): ";
	printOddEven(14);
	std::cout << std::endl;
	std::cout << "hailstone(13): ";
	hailstone(13);
	std::cout << std::endl;
}
