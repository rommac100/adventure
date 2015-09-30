//
// Created by rommac100 on 9/28/15.
//
#include <iostream>
#include "room0.h"
#include "variables.h"
#include "main.h"
#include "room1.h"
using namespace std;
int room0() {
    go = false;
    cout << bedroom <<endl;
    while (go == false) {
        cin >> aDir;
        if (aDir == dir[0] || aDir == dir[1] || aDir == dir[3] && room == 0) {
            room = 0;
            cout << wall << endl;
        }
        else if (aDir == dir[2]) {
            room = 1;
            go = true;
            room1();
        }
    }
}