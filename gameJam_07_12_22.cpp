//GameJam Wednesday 7th December 2022

#include <iostream>
using namespace std;

//=================================Variables=================================

bool hasItemA = false;
bool hasItemB = false;
int itemCounter = 0;
char choice;

//=================================functions called=================================
void searchForItem();
void trade();

int main()
{
    searchForItem();
    trade();
}

//=================================functions=================================

void searchForItem()
{
    cout << endl << "=================================" << endl << endl;
    cout << "You find an interesting item on the floor, do you want to pick it up?- ";
    cin >> choice;

    if (choice == 'y')
    {
        hasItemA = true;
        cout << endl << "Acquired Scrap parts!" << endl << endl; 
    }

    else if (choice == 'n')
    {
        cout << endl << "You decide not to pick up the item, maybe it was for the best?" << endl << endl;
        
    }

    else
    {
        cout << endl << "ERrR0r__Invalid Choice__.." << endl;
        searchForItem();
    }
}

void trade()
{
    cout << endl << "=================================" << endl << endl;
    cout << "You enter the room, the robot stares at you and welcomes you, a pile of gleaming metal beside it, he says, 'You got the goods?'" << endl << endl;
    
    if (hasItemA == true)
    {
        cout << endl << "You hand the robot the goods, it inspects it, satisfied with what has been provided, it nods and hands you a refurbished part." << endl;
        hasItemA = false;
        hasItemB = true;
        cout << endl << "You leave the shop satisfied with the rewards of your work.";
        cout << endl << endl << "=================================";
    }

    else
    {
        cout << endl << "The trader grumbles as you have nothing to offer it," << endl << " they say 'Can't give you the parts if you don't have anything to give me.'";
        cout << endl << endl << "You leave the trader's house disappointed and think 'I'll try again tommorrow'";

    }
}