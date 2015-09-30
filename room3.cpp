//
// Created by rommac100 on 9/29/15.
//
#include <iostream>
#include "variables.h"
#include "room3.h"
#include "room1.h"

using namespace std;
int room3(){
    cout <<kitchen<<endl;
    go = false;
    while (go ==false){
        cout << "n = note."<<endl;
        cin >> aDir;
        if (aDir == dir[0]){cout << noteKitchen<<endl;}
        else if (aDir == dir[1]){room = 1; room1();}
        else if (aDir == dir[2]){cout << stove << stovenom <<endl;}
    }
}
