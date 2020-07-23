#include <iostream>
using namespace std;
void histo(int arr[], size_t size) {
	int max = arr[0];
	for (int check = 0; check<size; check++)
	{
		if (arr[check] > max)
			max = arr[check];
	}
	for (int rows = max;rows>=1; rows--)
	{
		for (int cols = 0; cols<=size; cols++)
		{
			if (arr[cols] >= rows) cout << "* ";
			else cout << "  ";
			
		}
		cout << endl;
		
	}
}
int main() {
	int arr[]{ 2,1,0,7,1,9};
	size_t size = sizeof(arr) / sizeof(*arr);
	histo(arr, size);
}