#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, i;
	cin >> n;
	long temp;
	vector<long> a;
	vector<long> b;
	long long int max = 0;
	for(i=0; i<n; i++) {
		cin >> temp;
		a.push_back(temp);
	}
	for(i=0; i<n; i++) {
		cin >> temp;
		b.push_back(temp);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	auto Ait = a.begin();
	auto Bit = b.begin();
	while(Ait != a.end() || Bit != b.end()) {
		max = max + ((*Ait) * (*Bit));
		Ait++;
		Bit++;
	}
	cout << max << endl;
}
