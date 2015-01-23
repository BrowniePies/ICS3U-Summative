#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include "combat.cpp"

using namespace std;

//Function Forward Declarations
void pressAnyKey();

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
    cout << "You enter a small town at the outskirts of the great domain of Hallahuhacber" << endl;
    cout << "This town has been raveged by the goblins and kobolds" << endl;
    cout << "It seems as though there will be another attack later this day" << endl;
    cout << "Do you stay and help them defend?" << endl;

    stdLoopCond = false;

    while(stdLoopCond == false){

        getline(cin,helptown);

        if (helptown == "yes" or helptown == "Yes" or helptown == "stay")
        {
            cout << "You stay and wait for the attack to commence" << endl;
            cout << "A kobold approaches...." << endl;
            pressAnyKey();
            system("CLS");
            combat("Kobold", 20);
            karma+=25;
            stdLoopCond = true;
        }
        else if (helptown == "no" or helptown == "No")
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

    pressAnyKey();

    //Starts "Cry for Help" Section
    cout<< "While walking on the main road, you hear a cry from within the woods." << endl;
    cout<< "'Help! I'm being mugged!' cries the feminine voice"<<endl;


    return 0;


}



//Functions

void pressAnyKey(){

    cout << "Press any key to continue." << endl;
    getch();

}
