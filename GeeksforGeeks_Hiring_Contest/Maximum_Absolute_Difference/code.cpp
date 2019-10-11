#include<iostream>
#include<math.h>
using namespace std;

long int maxAbosoulteDiff( int A[] , int N) {
    long int maxDiff = 0;
    int first[N], second[N];
    for(int i = 0; i < N; i++ ) {
        if( i % 2 == 0 ) {
            first[i] = 1;
            second[i] = A[i];
        }
        else {
            first[i] = A[i];
            second[i] = 1;
        }
    }
    int firstD = abs(first[0] - first[1]);
    int secondD = abs(second[0] - second[1]);;
    for(int i = 1; i < N - 1; i++ ) {
        firstD += ( (abs(first[i] - first[i - 1]) ) >  (abs(first[i ] - first[i + 1]) ) ) ? abs(first[i] - first[i - 1]) : abs(first[i ] - first[i + 1]);
        secondD += ( (abs(second[i] - second[i - 1]) ) >  (abs(second[i ] - second[i + 1]) ) ) ? abs(second[i] - second[i - 1]) : abs(second[i ] - second[i + 1]);
    }
    maxDiff = (firstD > secondD) ? firstD : secondD;
    return maxDiff;
}
int main() {
    int T, N;
    cin >> T;
    cin >> N;
    int A[N];
    for( int i_T = 0; i_T < T; i_T++ ) {
        for( int i = 0; i < N; i++ ) {
            cin >> A[i];
        }
        cout << maxAbosoulteDiff(A, N) << "\n";
    }
    return 0;
}
