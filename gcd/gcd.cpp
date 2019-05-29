#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if(b==0) 
		return a;
	
	int r = a % b;
	return gcd(b, r);
}

int main()
{
	int a,b;
	cin >> a >> b;
    int result = gcd(a,b);
    cout << result << endl;
	return 0;
}
