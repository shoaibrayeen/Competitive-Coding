#include<iostream>
int main() {
    int n;
    std::cin>>n;
    int array[n];
    int result = 0;
    for (int i = 0 ; i < n; i++ ) {
        std::cin>>array[i];
        result ^= array[i];
    }
    std::cout << result << std::endl;
	return 0;
}

/*
We are given an array containg n numbers. All the numbers are present twice except for one number 
which is only present once. Find the unique number without taking any extra spaces and in linear time.
*/
