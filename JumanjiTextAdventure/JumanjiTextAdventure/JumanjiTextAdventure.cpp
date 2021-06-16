// Lost Fortune
// A personalized adventure

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	// Made all of the variables seperate. Additionally, added some of my own variables. 
	const int GOLD_PIECES = 9000;
	int Dragonslayers;
	int killed;
	int survivors;
	int Goblins; 
	string leader;
	string Dragon;

	//Getting the variable information and initializing them. 
	cout << "Welcome to the legend of the Dragonslayer's\n\n";
	cout << "Please enter the required information for the Dragonslayer Adventure! \n";

	cout << "Enter a number: ";
	cin >> Dragonslayers;

	cout << "Enter a number, smaller than the first: ";
	cin >> killed;

	cout << "Enter a number, Between 2-7: ";
	cin >> Goblins;

	survivors = Dragonslayers - killed;

	cout << "Enter your name: ";
	cin >> leader;

	cout << "";
	cin >> Dragon;

	//Adding the dialouge for the adventure
	cout << "\nA brave group of " << Dragonslayers << " set out on a quest \n";
	cout << "-- in search of the lost treasure of the Ancient Dragons. \n";
	cout << "The group was led by a infamous Knight, " << leader << ".\n";
	cout << "\nAlong the way, a band of " << Goblins << " Goblins ambushed the party. \n";
	cout << "All fought bravely under the command of " << leader;
	cout << ", and the Goblins were defeated with the party unscathed. \n";
	cout << "After a long and treacherous journey through the Black Mountains where the group of Ancient Dragons live. \n";
	cout << "The group arrived upon a set of towering stone doors of a former dwarven fortress.\n";
	cout << "The group pushing open large stone doors. Immediately shown to the party is endless piles of gold. \n";
	cout << "Enough to last these Dragonslayers multiple life times. \n";
	cout << "Venturing further into the golden chambers, the Dragonslayers strucken with both amazement and fear of what lies ahead of them. \n";
	cout << "As they deeper and deeper into the depths of the dwarven fortress they are stopped by the thunderous sound of stomping around them. \n";
	cout << "A group of three Ancient Dragons surronding the group of Dragonslayers \n";
	cout << "Of the Dragonslayers, " << killed << " were vanquished, ";
	cout << "leaving just " << survivors << " in the group.\n";

	// The ending of the text adventure 
	cout << "\nThe party was about to give up all hope. \n";
	cout << "But while laying the deceased to rest, ";
	cout << "they stumbled upon the buried fortune. \n";
	cout << "So the adventurers split " << GOLD_PIECES << " gold pieces.\n";
	cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
	cout << " pieces to keep things fair of course.\n";

	return 0;
}

// I acutally had some fun doing this 
// Use this as a template for the future. 