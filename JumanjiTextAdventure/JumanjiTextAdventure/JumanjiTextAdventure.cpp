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
	const int GOLD_PIECES = 90000;
	int Dragonslayers, killed, survivors;
	string leader;

	//get the information
	cout << "Welcome to the legend of the Dragonslayer's\n\n";
	cout << "Please enter the following for your personalized adventure\n";

	cout << "Enter a number: ";
	cin >> Dragonslayers;

	cout << "Enter a number, smaller than the first: ";
	cin >> killed;

	survivors = Dragonslayers - killed;

	cout << "Enter your name: ";
	cin >> leader;

	//tell the story
	cout << "\nA brave group of " << Dragonslayers << " set out on a quest \n";
	cout << "-- in search of the lost treasure of the Ancient Dragons. \n";
	cout << "The group was led by a infamous Knight, " << leader << ".\n";

	cout << "\nAlong the way, a band of marauding Goblins ambushed the party. \n";
	cout << "All fought bravely under the command of " << leader;
	cout << ", and the Goblins were defeated. \n";
	cout << "After a long and treacherous journey through the Black Mountains where the group of Ancient Dragons live. \n";
	cout << "The group arrived upon a set of towering stone doors of a former dwarven fortress.\n";
	cout << "The group pushing open large stone doors. Immediately shown to the party is endless piles of gold. \n";
	cout << "Enough to last these Dragonslayers multiple life times. \n";
	cout << "Venturing further into the golden chambers, the Dragonslayers strucken with both amazement and fear of what lies ahead of them. \n";
	cout << "As they deeper and deeper into the depths of the dwarven fortress they are stopped by the thunderous sound of stomping around them. \n";
	cout << "A group of three Ancient Dragons surronding the group of Dragonslayers \n";
	cout << "Of the Dragonslayers, " << killed << " were vanquished, ";
	cout << "leaving just " << survivors << " in the group.\n";

	cout << "\nThe party was about to give up all hope. \n";
	cout << "But while laying the deceased to rest, ";
	cout << "they stumbled upon the buried fortune. \n";
	cout << "So the adventurers split " << GOLD_PIECES << " gold pieces.\n";
	cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
	cout << " pieces to keep things fair of course.\n";

	return 0;
}