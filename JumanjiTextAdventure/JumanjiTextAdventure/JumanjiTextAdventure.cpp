/*

Michael Durst
6/15/2020

	This is the "Jumanji" text adventure assignment that revolves around getting information inputed by the user
	and displaying that information within in the story. Like how you input your name and your name will later be displayed
	in the text adventure. Through this assignment i added several of my own variables and added more story to the adventure.
	Also, chganed how the extra gold pieces is caculated. 

*/


#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	// Made all of the variables seperate. Additionally, added some of my own variables.
	// *Added some extra int {Goblins} - and added a extra string {Dragon}
	const int GOLD_PIECES = 9000;
	int Dragonslayers;
	int killed;
	int survivors;
	int Goblins; 
	string leader;
	string Dragon;

	//Getting the variable information and initializing them.
	//Rearranged where you enter information to make it flow a little better. Additionally, initialized the added variables into the text adventure. 
	cout << "Welcome to the legend of the Dragonslayer's\n\n";
	cout << "Please enter the required information for the Dragonslayer Adventure! \n";

	cout << "Enter your name: ";
	cin >> leader;

	cout << "Enter the name of the main Dragon: ";
	cin >> Dragon;

	cout << "Enter a number: ";
	cin >> Dragonslayers;

	cout << "Enter a number, smaller than the first: ";
	cin >> killed;

	cout << "Enter a number, Between 2-7: ";
	cin >> Goblins;

	survivors = Dragonslayers - killed;

	

	//Adding the dialouge for the adventure
	cout << "\nA brave group of " << Dragonslayers << " set out on a quest \n";
	cout << "-- in search of the lost treasure of the Ancient Dragons. \n";
	cout << "The group was led by a infamous Knight, " << leader << ".\n";
	// Added another encounter to the adventure, where the group is ambushed by a group of goblins
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
	// Added some dialouge between the leader and the main dragon 
	cout << "My name is "<< Dragon << " Why do you intrude into my domain! \n";
	cout << "We have come to slay you for terrorizing our townspeople! \n";
	cout << Dragon << " responded with mearly a large roar in return. \n";
	cout << "Fighting on all side against three Ancient Dragons is not impossible task but it is certainly not a easy one. \n";
	cout << "After a long and treacherous fight. \n";
	cout << killed << " Dragonslayers were killed in battle. \n";
	cout << "leaving just " << survivors << " in the group.\n";

	// The ending of the text adventure 
	cout << "\nThe party was about to give up all hope. \n";
	cout << "But while laying the deceased to rest, ";
	cout << "the group decided to take all of the gold they could carry back to the inn. \n";
	cout << "Trying to figure out the what to do with the gold they carried back." << leader << "Decided to split the gold evenly among the survivors. \n";
	cout << "So the adventurers split " << GOLD_PIECES << " gold pieces.\n";
	// Changed how the gold was split in the end rather than have it decided through %, I went with dividing the gold piecies by survivors.
	cout << leader << " held on to the extra " << (GOLD_PIECES / survivors);
	cout << " pieces to keep things fair of course.\n";

	return 0;
}

// I acutally had some fun doing this 
// Use this as a template for the future. 