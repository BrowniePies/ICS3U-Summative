#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include "global.h"

using namespace std;

<<<<<<< HEAD
int combat();
=======
void pressAnyKey();
>>>>>>> origin/master

int main()
{
    string Name;
    string helptown;
    int health = 20;
    int damage = 0;
    int karma = 0;
    bool stdLoopCond;

    //Introduction
    cout << "Welcome to our game!" << endl;
    cout << "Please enter your name to continue." << endl;
    getline(cin,Name);
    cout << "Hello " << Name << "." << endl;
    cout << "\nPress any key to continue." << endl;
    getch();
    system("CLS");
    cout << "You go on a adventure!" << endl;
    cout << "On this adventure, you will encounter many obstacles. goblins, cyborgs, kobolds, and even Cyber-Dragons." <<endl;
    cout << "\nAs you can see, you live in a time of Futuristic Technology, but magic and monsters have returned to the lands"<<endl<<endl;
    pressAnyKey();
    system("CLS");

    //First Choice
    cout << "You enter a small town at the outskirts of the great Kingdom of Ylisse" << endl;
    cout << "This town has been raveged by the goblins and kobolds" << endl;
    cout << "It seems as though there will be another attack later this day" << endl;
    cout << "Do you stay and help them defend?" << endl;

    stdLoopCond = false;

    while(stdLoopCond == false){

        getline(cin,helptown);
        if (helptown == "yes" or helptown == "Yes" or helptown == "stay")
        {
            cout << "You stay and wait for the attack to commence" << endl;
            //Make shit happen here and change some values or something
            //Also start working on a combat system
            //It doesn't have to be great, just random numbers and shit
            //Also have our game based around karma, and your karma changes the ending
            stdLoopCond = true;
        }
        else if (helptown == "no" or helptown == "No" or helptown == "carry on")
        {
            cout << "You decide to leave the town for dead." << endl;
            karma-=25;
            stdLoopCond = true;

        }
        else
        {
            cout << "Your answer was too strange to be taken seriously, try again" << endl;
        }

    }
    cout << "And so, you move on with your journey." << endl;

    //Starts "Cry for Help" Section
    cout<< "While walking through " << endl;


    return 0;


}

void pressAnyKey(){

    cout << "Press any key to continue." << endl;
    getch();

}
