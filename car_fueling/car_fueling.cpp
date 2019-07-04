#include <iostream>
using namespace std;

int carFueling() {
	long int d, currRefill = 0, prevRefill;
	int m,n,i, numRefills = 0;
	cin >> d;
	cin >> m;
	cin >> n;
	long int stop[n+1];
	stop[0] = 0;
	for(i = 1; i <= n; i++)
		cin >> stop[i];
	stop[n+1] = d;
	while (currRefill < n+1) {
		prevRefill = currRefill;
		while(currRefill < n+1 && (stop[currRefill+1] - stop[prevRefill] <= m))
			currRefill = currRefill + 1;
		
		if(prevRefill == currRefill) {
			return -1;
		}
		else {
			numRefills = numRefills + 1;
		}
	}
	if(currRefill != n+1)
		return numRefills;
	else
		return numRefills-1;
}

int main()
{
    int answer = carFueling();
	cout << answer << endl;
	return 0;
}
