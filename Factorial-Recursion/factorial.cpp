#include <iostream>

using std::cout;
using std::endl;

int factorial( int nInteger);

int main(){

        int integer = 5;  // change this to any number you want the factorial of.
        int result = factorial( integer);
        cout << "factorial(" << integer << ") = " << result << " (in main())\n";

        return 0;
}

int factorial( int n){
        int product = 1;

        cout << "factorial(" << n << ")\n";
        if( n == 0){
                // base case
                product = 1;
        }else{
                product = n * factorial( n - 1);
        }

        cout << "returning " << product << endl;

        return product;
}

/* output  
factorial(5)
factorial(4)
factorial(3)
factorial(2)
factorial(1)
factorial(0)
returning 1
returning 1
returning 2
returning 6
returning 24
returning 120
factorial(5) = 120 (in main())   */ 
