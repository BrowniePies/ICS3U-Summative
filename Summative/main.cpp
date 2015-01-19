#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    char Name[50];

    cout << "Welcome to our game!" << endl;
    cout << "Please enter your name to continue." << endl;
    cin >> Name //Asks user for their name
    cout << "Hello " << Name << "." << endl;
    return 0;
}
