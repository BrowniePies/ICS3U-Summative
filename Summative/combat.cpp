#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>

using namespace std;

void combat(string monstername, int monsterhealth)

{
    string choice;
    extern int hp;
    bool stdLoopCond;

    cout << "The fight begins!" << endl;
    while (monsterhealth >= 0)
    {
        if (monsterhealth >= 0)
            {
                stdLoopCond = false;
            }
        cout << "The " << monstername << " has " << monsterhealth << "hp." << endl;
        while (stdLoopCond == false)
            {
            cout << "What do you do?" << endl;
            getline(cin,choice);
            if (choice == "fight")
            {
                cout << "You attack the " << monstername << endl;
                stdLoopCond = true;
            }
            }
    }
}
