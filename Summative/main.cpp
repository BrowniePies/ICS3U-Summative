#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    char Name[50];

    cout << "Welcome to our game!" << endl;
    cout << "Please enter your name to continue." << endl;
    cin >> Name; //Asks user for their name
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
    cout << "You enter a small town at the outskirts of the great kingdom of INSERT NAME" << endl;
    cout << "This town has been raveged by the goblins and kobolds" << endl;
    cout << "It seems as though there will be another attack later this day" << endl;
    cout << "Do you stay and help them defend, or do you leave and carry on?" << endl;









    return 0;


}
