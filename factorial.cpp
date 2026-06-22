#include<bits/stdc++.h>
using namespace std ; 

int found_factorial(int n ){
    if( n == 0 ) return 1 ;

    return n * found_factorial(n-1) ;
} 

int main (){
    int n ; 
    cout << "Enter your number : " ;
    cin >> n ; 
    cout << "Factorial of " << n << " " << "is : " << found_factorial(n) << endl ; 
    return 0 ;
}
