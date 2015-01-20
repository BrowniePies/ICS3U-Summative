#include <iostream>
#include <windows.h>
#include<conio.h>

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
    return 0;
}
