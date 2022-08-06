#include <iostream>

#include <string.h>

#include <time.h>
#include <random>

#include "shared.hpp"

int main( void ) {
    
    using namespace std; 

    string inpt = "";
    cin >> inpt;

    srand( time( NULL ) );

    if ( inpt == "gList" ) { cout << "Games: 21, "; };
    if ( inpt == "21" ) { playTwentyOne(); };

    return 0;

}