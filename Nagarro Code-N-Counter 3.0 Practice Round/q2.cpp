#include<iostream>
int GCD(int N1 , int N2);
int main() {
    int N1 , N2;
	do {
	    std::cin>>N1;
	    std::cin>>N2;
	} while ( N1 < 1 || N2 < 1 );
	std::cout << GCD(N1 ,N2);
	return 0;
}

int GCD ( int N1 , int N2 ) {
   if(N1 == 1 || N2 == 1) {
       return 1;
   }
   else if ( N1 == N2) {
       return N2;
   }
   else if ( N1 > N2) {
       GCD(N1-N2 , N2);
   }
   else {
       GCD(N1 , N2-N1);
   }
}
