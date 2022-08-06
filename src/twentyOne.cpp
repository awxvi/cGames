#include <iostream>

#include <string.h>

#include <time.h>
#include <random>

#include "shared.hpp"

int getRandomNumber( int lower, int upper ) {
   
    srand( time( NULL ) );
    int i;
    int num = (rand() % (upper - lower + 1)) + lower;
    return num;

}

void playTwentyOne() {

    using namespace std;

    bool to_been_reached = false;
    int current_count = 0;

    while ( !to_been_reached && current_count < 21 ) {

        cout << "Computer's go.\n";
        cout << "computer rand number is: ";

        // Get random  number between 1 - 3, use as computers go then add to total.
        int comp_to_add = 0;
        comp_to_add = getRandomNumber( 1, 3 );
        cout << comp_to_add;

        // Ensure that on the computers go, the game ends if the total goes above 21.
        switch ( current_count ) {
            case 18:
                if ( comp_to_add == 3 ) {
                    cout << "\nComputer went to 21! You win.";
                    exit( 1 );
                }
                break;
            case 19:
                if( comp_to_add >= 2 ) {
                    cout << "\nComputer went to 21! You win.";
                    exit( 1 );
                } 
                break;
            case 20:
                if ( comp_to_add >= 1 ) {
                    cout << "\nComputer went to 21! You win.";
                    exit( 1 );
                }
                break;
        }

        current_count += comp_to_add;

        //Players go.
        int to_add = 0;
        cout << "\nWhat would you like to add to " << current_count << "?\n";
        cin >> to_add;

        // Ensure player doesn't enter number > 3.
        if ( to_add > 3 ) {
            cout << "Only 1-3 is allowed.";
            exit(1);
        }

        current_count += to_add;

        cout << "the current total is: " << current_count << "\n";

        if ( current_count >= 21 ) {
            std::cout << "The computer wins";
            to_been_reached = true;
        }
    }

}