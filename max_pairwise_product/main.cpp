#include <iostream>
#include <cstdlib>						// For rand() function
#include <vector>
using namespace std;

// The below algorithm has Time Complexity of pow(n,2)
long long maxPairwiseProduct1(vector<int> numbers) {
	long long result = 0;
	int i,j;
	int n = numbers.size();
	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			if (((long long)numbers[i]) * numbers[j] > result) {
				result = ((long long)numbers[i]) * numbers[j];
			}
		}
	}
	return result;
}

// In the algorithm below, we first find index of largest element and store it in max_index1. 
// Similarly, we find index of second largest element and store it in max_index2.
// Finally we return product of max_index1 and max_index2.
long long maxPairwiseProduct(vector<int> numbers) {
	int n = numbers.size();
	
	int max_index1 = -1;
	for(int i=0; i<n; i++) {
		if(max_index1 == -1 || numbers[i] > numbers[max_index1]) {
			max_index1 = i;
		}
	}
	
	int max_index2 = -1;
	for(int i=0; i<n; i++) {
		if((i != max_index1) && (max_index2 == -1 || numbers[i] > numbers[max_index2])) {
			max_index2 = i;
		}
	}
	return (long long)(numbers[max_index1] * numbers[max_index2]);
}

// The actual main program
int main1()
{
	int n;
	cin >> n;
    vector<int> numbers(n);
	for(int i=0; i<n; i++)
		cin >> numbers[i];
    long long result = maxPairwiseProduct(numbers);
	cout << result << endl;
    return 0;
}

// Stress Testing is a program that generates random tests in an infinite loop, and
// for each test, it launches your solution on this test and
// an alternative solution on the same test and compares the results.
int main()
{
	while(true) {
		int n = rand() % 9 +2;
		cout << n << endl;
		vector<int> a;
		int i;
		for(i = 0 ; i < n ; i++) {
			a.push_back(rand() % 100);
		}
		for(i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
		long long res1 = maxPairwiseProduct1(a);
		long long res2 = maxPairwiseProduct(a);
		
		if(res1 != res2) {
			cout << "Wrong Answer: " << res1 << " " << res2 << endl;
			break;
		} else {
			cout << "Ok";
		}
	}
}