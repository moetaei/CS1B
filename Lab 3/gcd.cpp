/*
 * gcd.cpp
 *
 *  Created on: Jan 31, 2018
 *      Author: mtaei0
 */
#include "header.h"


int gcd(int greater, int smaller) {
    while (smaller != 0) {
        greater %= smaller;
        swap(greater, smaller);
    }
    return abs(greater);
}


