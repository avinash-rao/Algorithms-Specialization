#include <iostream>
#include <string.h>
using namespace std;

bool isGreaterOrEqual(int a, int b) {
	int num1 = a;
	int num2 = b;
	int z1 = 1, z2 = 1;
	while(num1 != 0) {
		z1 = z1 * 10;
		num1 = num1/10;
	}
	while(num2 != 0) {
		z2 = z2 * 10;
		num2 = num2/10;
	}
	int resultingDigit1 = a * z2 + b;
	int resultingDigit2 = b * z1 + a;
	if(resultingDigit1 > resultingDigit2) 
		return true;
	else
		return false;
}

int main()
{
    int n, i, maxDigit,d, index;
	cin >> n;
	int digit[n];
	for(i = 0; i < n; i++) {
		cin >> digit[i];
	}
	for(i = 0; i<n; i++) {
		maxDigit = digit[i];
		for(int j = i+1; j < n; j++) {
			d = digit[j];
			if(isGreaterOrEqual(d, maxDigit)) {
				maxDigit = d;
				index = j;
			}
		}
		if(maxDigit != digit[i]) {
			int temp = digit[i];
			digit[i] = digit[index];
			digit[index] = temp;
		}
		
	}
	for(i = 0; i < n; i++) 
		cout << digit[i];
	cout << endl;
}
