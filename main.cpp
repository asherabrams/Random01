//
//  main.cpp
//  cpp-Project015
//
//  Created by Asher Abrams on 2017/05/18.
//  Copyright © 2017 Asher Abrams. All rights reserved.
//  Generates a random number using execution time as a seed.

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int randomNumber;
int randomOut;

int main(int argc, const char * argv[]) {
    // insert code here...
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();
    int randomOut = (randomNumber % 10000);
    cout << randomOut << '\n';
    return 0;
}
