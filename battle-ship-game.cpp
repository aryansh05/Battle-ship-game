//Battle Ship game
#include <iostream>
using namespace std;

int main()
{
bool ships[3][3] = {
		   {0,1,1},
		   {1,0,0},
		   {0,1,1}
		  };
int number_of_turns = 0;
int hits = 0;
string name;
	
	cout << "\t\t\t\t\t\t\t BATTLE SHIPS\n";
	cout << "\t\t\t\t \"You have 10 ammo to defeat enemies ships hiding at certain Co-ordinates find them and attack on them.\n";
	cout << "\t\t\t\t\t\t Remember Important Note: Once the ammo finsishes the game ends.\"\n";
	cout << "\t\t\t\t\t\t\t GAME STARTS\n";
	cout << "What would you like us to call you captain: " << endl;
	getline(cin,name);

while(hits<5)
{
int rows;
int coloumns;
	cout << "***********************\n";
	cout << "Guns refilled ATTACK mode on\n";
	cout << "ATTACK\n";
	cout << "Select the Co-ordinates where you want to attack Captain " << name << "!" << endl;

	//asking for the rows and coloumns
	cout << "Select a row number between 0 to 2: ";
	cin >> rows;
	cout << "Select a coloumn number between 0 to 2: ";
	cin >> coloumns;

//check if it exist the bool variable we created
if(ships[rows][coloumns])
{
	//player have hit the ship set the value to 0
	ships[rows][coloumns] = 0;
	//increse hits counter
	++hits;
	//Tell the playaer they have hit the ship and how many left
	cout << "GOTCHA CAPTAIN " << name << "!" << " " << (5-hits) << " left.\n" << endl;
}
else
{
	cout << "MISSED IT\n" << endl;
}
	//how many turn player have  taken
	++number_of_turns;
	cout << "You have " << (10 -  number_of_turns) << " ammo left.\n";
	
if(number_of_turns >= 10)
{
	cout << "Out of ammo Captain!" << endl;
	cout << "MISSION ABORT\n";
	cout << "Failed\n";
	break;
}
}
if(number_of_turns >= 10)
{
	cout << "TRY AGAIN LATER\n";
	cout << "\t\t\t\t\t\t\t GAME ENDS\n";

}
else
{
	cout << "VICTORY!" << endl;
	cout << "You won in " << number_of_turns << " turns.\n";
	cout << "\t\t\t\t\t\t\t GAME ENDS\n";
}

	return 0;
}



