//
//  main.cpp
//  CS 232 Recursion Fibonacci
//
//  Created by Melissa Gio on 3/6/23.
//

#include <iostream>
#include <cmath>
using namespace std;

//function prototypes
int fibonacci(int fibNumPosPar);

int main() {
    //declarations
    int userNum;
    
    
    //get user input
    cout << "How many fibonacci numbers do you want to display: ";
    cin >> userNum;
    
    //calculations and output
    for (int i = 0; i < userNum; i++) {
        cout << fibonacci(i) << " "; //calls the fibonacci function and starts it at the letter i which is 0, it then keep incrementing until it hits the userNum
    }
    cout << endl;
    

    
}


//function definititions
int fibonacci(int fibNumPosPar) {
    if (fibNumPosPar == 0) { //the 1st fibonacci number
        return 0;
    } else if (fibNumPosPar == 1) { //the 2nd fibonacci number
        return 1;
    } else {
        return fibonacci(fibNumPosPar - 1) + fibonacci(fibNumPosPar - 2);
    }
}
