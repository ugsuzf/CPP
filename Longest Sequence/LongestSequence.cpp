#include <iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main() {
	int currnum = 0;
	int currlen = 1;
	int k = 0;
	int longlen = 0;
	int longnum = 0;

	while (true) {

		cin >> k;
		if (k == currnum)
		{
			++currlen;
			continue;
		}
		if (currlen > longlen)
		{
			longlen = currlen;
			longnum = currnum;
		}
		if (k == 0)break;

		currnum = k;
		currlen = 1;


	}
	cout << longlen << " times " << longnum << endl;





}

