#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string Name;
    string helptown;

    cout << "Welcome to our game!" << endl;
    cout << "Please enter your name to continue." << endl;
    getline(cin, Name);
    cout << "Hello " << Name << "." << endl;
    cout << "\nPress any key to continue." << endl;
    getch();
    system("CLS");
    cout << "You go on a adventure!" << endl;
    cout << "On this adventure, you will encounter many obstacles. goblins, cyborgs, kobolds, and even Cyber-Dragons." <<endl;
    cout << "\nAs you can see, you live in a time of Futuristic Technology, but magic and monsters have returned to the lands"<<endl<<endl;
    cout << "Press any key to continue." << endl;
    getch();
    system("CLS");
    cout << "You enter a small town at the outskirts of the great Kingdom of Hearts" << endl;
    cout << "This town has been raveged by the goblins and kobolds" << endl;
    cout << "It seems as though there will be another attack later this day" << endl;
    cout << "Do you stay and help them defend?" << endl;
    cin >> helptown;
    if (helptown == "yes")
    {
        cout << "YES" << endl;
        //Make shit happen here and change some values or something
        //Also start working on a combat system
        //It doesn't have to be great, just random numbers and shit
        //Also have our game based around karma, and your karma changes the ending
    }
    else if (helptown == "no")
    {
        cout << "You decide to leave the town for dead." << endl;

    }
    else
    {
        cout << "Your answer was too strange to be taken seriously."
    }
    cout << "And so, you move on with your journey." << endl;




    return 0;


}
