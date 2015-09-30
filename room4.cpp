//
// Created by rommac100 on 9/29/15.
//

#include "room4.h"
#include <iostream>
#include "variables.h"
#include "room0.h"
#include "room1.h"
using namespace std;
int room4()
{
    cout <<library<<endl;
    go = false;
    while (go == false)
    {
        cout << "n = note.";
        cin >> aDir;
        if (aDir == dir[3]){room =1; go == true; room1();}
        //else if (aDir == dir[1])
        else if (aDir == dir[0]){cout << noteLibrary; item = "stake";}
    }

}