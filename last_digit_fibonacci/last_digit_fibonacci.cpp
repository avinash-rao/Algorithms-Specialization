#include <iostream>
using namespace std;

// Using array
int lastDigitFibo1(int n) {
	int fibo[500];
	fibo[0] = 0;
	fibo[1] = 1;
	for (int i=2; i <= n; i++) {
		fibo[i] = (fibo[i-1] + fibo[i-2]) % 10;
	}
	return fibo[n];
}

// Without using array(better one)
int lastDigitFibo(int n) {
	int first = 0;
	int second = 1;
	int res;
	for(int i = 2; i <= n; i++) {
		res = (first + second) % 10;
		first = second;
		second = res;
	}
	return res;
}

int main(int argc, char **argv)
{
    int n;
	cin >> n;
	int result = lastDigitFibo(n);
	cout << result << endl;
}
