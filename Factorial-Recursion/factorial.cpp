#include <iostream>

using std::cout;
using std::endl;

int factorial( int nInteger);

int main(){

        int integer = 3;
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
