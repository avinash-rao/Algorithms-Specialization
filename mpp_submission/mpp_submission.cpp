#include <iostream>
using namespace std;

long long maxPP(long long a[], int n) {
	int index1 = -1, index2 = -1, i;
	
	for (i = 0; i < n; i++) {
		if(index1 == -1 || a[i] > a[index1]) 
			index1 = i;
	}
	for(i = 0; i < n; i++) {
		if(i != index1 && (index2 == -1 || a[i] > a[index2]))
			index2 = i;
	}
	return (long long)(a[index1] * a[index2]);
}

int main()
{
	long n;
	cin >> n;
	
    long long a[n];
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	
	long long result = maxPP(a, n);
	cout << result;
    return 0;
}
