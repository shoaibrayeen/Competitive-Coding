// CPP code to segregate even odd
// numbers in an array
#include <bits/stdc++.h>
using namespace std;

// Function to segregate even odd numbers
void arrayEvenAndOdd(int arr[], int n)
{

    int i = -1, j = 0;
    int t;
    while (j != n) {
        if (arr[j] % 2 == 0) {
            i++;

            // Swapping even and odd numbers
            swap(arr[i], arr[j]);
        }
        j++;
    }

    // Printing segregated array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// Driver code
int main()
{
    int arr[] = { 1, 3, 2, 4, 7, 6, 9, 10 };
    int n = sizeof(arr) / sizeof(int);
    arrayEvenAndOdd(arr, n);
    return 0;
}
