#include <iostream>
using namespace std;

int main()
{
    int amt;
	cin >> amt;
	
	int coins[] = {20, 10, 5, 2, 1};
	
	int n = sizeof(coins)/sizeof(int);
	int qty;
	for(int i=0; i < n; i++) {
		qty = amt/coins[i];
		amt = amt - (coins[i] * qty);
		if(qty > 0) 
			cout << coins[i] << " X " << qty << endl;
	}
	
    return 0;
}
