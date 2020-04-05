#include <iostream>
#include <vector>
#include <climits>
using namespace std;

long long int helper(vector<long> quantity) {
        int n = int(quantity.size());
	long long int result = INT_MAX;
	long long int labQuantity;
	for( int i = 0; i < n; i++ ) {
		cin >> labQuantity;
		if ( quantity[i] != 0 ) {
			labQuantity = int(labQuantity/quantity[i]);
			if ( result > labQuantity ) {
				result = labQuantity;
			}
		}
	}
	return result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    	int n;
    	cin >> n;
	vector<long> quantity(n);
	for( int i = 0; i < n; i++ ) {
		cin >> quantity[i];
	}
	
	cout << helper(quantity) << "\n"; 
	return 0;
}
