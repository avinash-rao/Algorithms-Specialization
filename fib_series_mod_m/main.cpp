#include <iostream>
using namespace std;

int main()
{
	int n = 30, m;
	cin >> m;
	cout << endl;
	long long a[1000];
	a[0] = 0;
	a[1] = 1;
	for(int i = 2; i<=n; i++) {
		a[i] = a[i-1] + a[i-2];
	}
	for(int i = 0; i<=n; i++) {
		cout << (a[i] % m) << endl;
	}
    return 0;
}
