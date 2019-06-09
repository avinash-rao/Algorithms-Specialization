#include <iostream>
using namespace std;

// For m = 2, the period is 011 and has length 3, while for m = 3 the period is 01120221 and has length 8. 
// Therefore, to compute, say, F2015 mod 3 we just need to find the remainder of 2015 when divided by 8. 
// Since 2015 = 251·8 + 7, we conclude that F2015 mod 3 = F7 mod 3 = 1
int fiboModM(long long n, int m) {
	long long d = (m*m)-1;
	return int((n % d) % m);
}

int main()
{
    long long n;
	int m;
	cin >> n >> m;
	int result = fiboModM(n,m);
	cout << result << endl;
	return 0;
}
