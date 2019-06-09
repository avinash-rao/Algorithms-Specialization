#include <iostream>
using namespace std;

int lastDigitFibo(int n) {
	int fibo[500];
	fibo[0] = 0;
	fibo[1] = 1;
	for (int i=2; i <= n; i++) {
		fibo[i] = (fibo[i-1] + fibo[i-2]) % 10;
	}
	return fibo[n];
}

int main(int argc, char **argv)
{
    int n;
	cin >> n;
	int result = lastDigitFibo(n);
	cout << result << endl;
}
