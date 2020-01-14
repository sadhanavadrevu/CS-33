//
//  main.cpp
//  hw1
//
//  Created by Sadhana Vadrevu on 4/12/19.
//  Copyright © 2019 Sadhana Vadrevu. All rights reserved.
//

#include <iostream>
#include <assert.h>
using namespace std;

typedef unsigned packed_t;

int xbyte(packed_t word, int bytenum) {
    int shiftedleft = word << ((3-bytenum) << 3);
    return shiftedleft >> 24;
}
int main() {
    cout << (xbyte(0xAABBCCDD, 1));
    assert(xbyte(0xAABBCCDD, 1) == 0xFFFFFFCC);
    assert(xbyte(0x00112233, 2) == 0x11);
    cout << "all tests passed" << endl;

}
