//
// Created by rommac100 on 9/29/15.
//

#include "room1.h"
#include <iostream>
#include "main.h"
#include "room0.h"
#include "variables.h"
#include "room4.h"
#include "room3.h"
using namespace std;

int room1() {
    cout << hallway;
    go = false;
    while (go == false)
    {
        cin >> aDir;
        if (aDir == dir[0]) {
            room = 0;
            room0();
        }
        else if (aDir == dir[1]){
            room = 4;
            go = true;
            room4();
        }
        else if (aDir == dir[3]){
            room =3;
            cout << kitchen;
            room3();
        }
    }
}