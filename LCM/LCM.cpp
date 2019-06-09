#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
	if(b==0) 
		return (long long)(a);
	
	long long r = a % b;
	return gcd(b, r);
}

// Check whether multiple of larger variable is divisible by the smaller element
long long lcm1(long long a, long long b) {
	int i = 1;
	if(b > a) {
		long long temp = a;
		a = b;
		b = temp;
	}
	while(true) {
		if((a*i)%b == 0)
			return (long long)(a*i);
		i++;
	}
}

// Finding LCM using GCD
long long lcm(long long a, long long b) {
	long long d = gcd(a,b);
	return (a*b/d);
}

int main()
{
    long long a,b;
	cin >> a >> b;
	long long result = lcm(a,b);
	cout << result << endl;
}
