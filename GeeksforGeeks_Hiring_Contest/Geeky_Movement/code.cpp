#include<iostream>
#include<math.h>
using namespace std;

long int minimumSteps( long int x[], long int y[], int N) {
    long int steps = 0;
    for( int i = 0; i < N - 1; i++ ) {
        long int diffx = abs(x[i] - x[i+1]);
        long int diffy = abs(y[i] - y[i+1]);
        if( diffx <= diffy) {
            steps += diffy;
        }
        else {
            steps += diffx;
        }
    }
    return steps;
}
int main() {
    int T, N;
    cin >> T;
    cin >> N;
    long int x[N],y[N];
    for( int i_T = 0; i_T < T; i_T++ ) {
        for( int i = 0; i < N; i++ ) {
            cin >> x[i];
            cin >> y[i];
        }
       
        cout << minimumSteps(x, y, N) << "\n";
    }
    return 0;
}
