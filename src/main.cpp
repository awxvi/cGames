#include <iostream>

#include <string.h>

#include "shared.hpp"

int main( void ) {
    
    using namespace std; 

    string inpt = "";
    cin >> inpt;

    if ( inpt == "gList" ) { cout << "Games: 21, "; };
    if ( inpt == "21" ) { playTwentyOne(); };

    return 0;

}