#include <iostream>
using namespace std;

/* int main()
{
    int n,j,i;
	long int W;
	cin >> n >> W;
	long int item[n][2], value, weight;
	float unitValue;
	for(i = 0; i < n; i++) {
		cin >> value >> weight;
		// To sort the entered values in array according to v/w
		j=i-1;
		unitValue = value/weight;
		while(j >= 0 && unitValue > (float)(item[j][0]/item[j][1])) {
			item[j+1][0] = item[j][0];
			item[j+1][1] = item[j][1];
			j--;
		}
		item[j+1][0] = value;
		item[j+1][1] = weight;
	}
	
	double totalValue = 0;
	for(i = 0; i < n && W > 0; i++) {
		if(W - item[i][1] >= 0) {
			totalValue = totalValue + item[i][0];
			W = W - item[i][1];
		}
		else {
			totalValue = totalValue + (double)((double)item[i][0] * (double)W / (double)item[i][1]);
		}
	}
	printf("%.4lf", totalValue);
}
*/

float maxLoot(int n, long int W) {
	
}

int main() 
{
	int n;	
	long int W;
	cin >> n >> W;
	float result = maxLoot(n, W);
	cout << result << endl;
}