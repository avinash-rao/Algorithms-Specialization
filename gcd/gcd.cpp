#include <iostream>
using namespace std;

long long gcd(int a, int b) {
	if(b==0) 
		return (long long)(a);
	
	int r = a % b;
	return gcd(b, r);
}

int main()
{
	int a,b;
	cin >> a >> b;
    long long result = gcd(a,b);
    cout << result << endl;
	return 0;
}
