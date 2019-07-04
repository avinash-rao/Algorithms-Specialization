#include <iostream>
using namespace std;

int denomination[] = {10,5,1};

// Returns number of coins
int change(int m) {
	int n = sizeof(denomination)/sizeof(int);
	int count = 0;
	int temp;
	for (int i=0; i<n; i++) {
		temp = m/denomination[i];
		count = count + temp;
		m = m - (temp * denomination[i]);
	}
	return count;
}

int main()
{
    int m;
	cin >> m;
    int count = change(m);
	cout << count << endl;
}
