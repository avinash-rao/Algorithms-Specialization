#include <iostream>
#include <vector>
using namespace std;

// Naive solution: Recursively call the function. This is a naive solution as 
// each call will compute value of f(n-1) and f(n-2) from the scratch.
long fibo1(int n) {
	if(n <= 1) 
		return n;
	else
		return fibo1(n-1) + fibo1(n-2);
}

// Efficient solution: Stores the fibonacci series in an array and to find f(n), 
// it looks up value of f(n-1) and f(n-2) from the array and adds them. T(n) = 2n + 2.
long long fibo(int n) {
	long long a[1000];
	a[0] = 0;
	a[1] = 1;
	for(int i = 2; i<=n; i++) {
		a[i] = a[i-1] + a[i-2];
	}
	return a[n];
}

int main()
{
	int n;
    cin >> n;
	long long result = fibo(n);
	cout << result << endl;
    return 0;
}
