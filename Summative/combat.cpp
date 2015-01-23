using namespace std;
void combat(string monstername, int monsterhealth)
{
    string choice;
    extern int hp;

    cout << "The fight begins!" << endl;
    while (monsterhealth >= 0)
    {
        cout << "The " << monstername << " has " << monsterhealth << "hp." << endl;
        cout << "What do you do?" << endl;
        cin >> choice;
    }
}
