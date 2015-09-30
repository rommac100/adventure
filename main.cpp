#include <iostream>
#include "room0.h"
#include "variables.h"
#include "room1.h"
#include "room4.h"
#include "main.h"
using namespace std;

int room = 0;




int main() {
    while (go == false) {
        cout << "directions: " << dir << endl;
        roomFun();
    }
}
void roomFun()
{
    switch (room)
    {
        case 0:
            room0 ();
            break;
        case 1:
            room1();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            room4();
            break;

    }
}