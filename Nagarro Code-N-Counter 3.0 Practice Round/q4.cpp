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
