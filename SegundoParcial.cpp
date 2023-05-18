#include <iostream>
#include <vector>
#include <string>

using namespace std;

void potion(vector<string>& inventory, int Gems, int option);
void sword(vector<string>& inventory, int Gems, int option);
void shield(vector<string>& inventory, int Gems, int option);
void armor(vector<string>& inventory, int Gems, int option);
void axe(vector<string>& inventory, int Gems, int option);
void gema(vector<string>& inventory, int Gems, int option);
void travel(vector<string>& inventory, int Gems, int option);
void cleanmirror();

int main()
{

	int Gems = 10;
	int option = 0;

	vector <string> inventory;
	inventory.push_back("");
	inventory.push_back("");
	inventory.push_back("");
	inventory.push_back("");
	inventory.push_back("");
	inventory.push_back("");
	inventory.push_back("");
	inventory.push_back("");
	inventory.push_back("");
	inventory.push_back("");

	cout << "Hello traveler, are you ready for this adventure?... let´s begin, you have " << Gems << " gems and you inventory have";

	for (unsigned int i = 0; i < inventory.size(); i++)
	{
		cout << inventory[i] << endl;
	}
	cout << "you have five space inventory free... now, go to adventure, please write a letter or number for continue" << endl;
	cin >> option;
	while (1) {
		int adventure;
		cout << "choose a option random, 1 a 6" << endl;
		cin >> adventure;
		switch (adventure)
		{
		case 1:
			potion(inventory, Gems, option);
			break;
		case 2:
			sword(inventory, Gems, option);
			break;
		case 3:
			shield(inventory, Gems, option);
			break;
		case 4:
			axe(inventory, Gems, option);
			break;
		case 5:
			gema(inventory, Gems, option);
			break;
		default:
			return 0;
			break;
		}
	}
}

void potion(vector<string>& inventory, int gems, int option)
{
	cleanmirror();
	cout << "you found a one potion, Would you like to keep it in inventory?\n1.Yes \n2.no" << endl;
	cin >> option;
	switch (option)
	{
	case 1:
		cout << "choose a space: 1.-0, 2.-1, 3.-2,4.-3,5,-4,6.-5,7.-6,8.-7,9.-8,0.-9" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			inventory[0] = "potion";
			break;
		case 2:
			inventory[1] = "potion";
			break;
		case 3:
			inventory[2] = "potion";
			break;
		case 4:
			inventory[3] = "potion";
			break;
		case 5:
			inventory[4] = "potion";
			break;
		case 6:
			inventory[5] = "potion";
			break;
		case 7:
			inventory[6] = "potion";
			break;
		case 8:
			inventory[7] = "potion";
			break;
		case 9:
			inventory[8] = "potion";
			break;
		case 0:
			inventory[9] = "potion";
			break;
		default:
			return potion(inventory, gems, option);
			break;
		}
		for (unsigned int i = 0; i < inventory.size(); i++)
		{
			cout << inventory[i] << endl << gems << endl;
		}

		break;
	case 2:

		break;
	default:
		return potion(inventory, gems, option);
		break;
	}
	return;
}

void sword(vector<string>& inventory, int Gems, int option)
{
	cleanmirror();
	cout << "you found a one sword, Would you like to keep it in inventory?\n1.Yes \n2.no" << endl;
	cin >> option;
	switch (option)
	{
	case 1:
		cout << "choose a space: 1.-0, 2.-1, 3.-2,4.-3,5,-4,6.-5,7.-6,8.-7,9.-8,0.-9" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			inventory[0] = "sword";
			break;
		case 2:
			inventory[1] = "sword";
			break;
		case 3:
			inventory[2] = "sword";
			break;
		case 4:
			inventory[3] = "sword";
			break;
		case 5:
			inventory[4] = "sword";
			break;
		case 6:
			inventory[5] = "sword";
			break;
		case 7:
			inventory[6] = "sword";
			break;
		case 8:
			inventory[7] = "sword";
			break;
		case 9:
			inventory[8] = "sword";
			break;
		case 0:
			inventory[9] = "sword";
			break;
			return sword(inventory, Gems, option);
			break;
		}
		for (unsigned int i = 0; i < inventory.size(); i++)
		{
			cout << inventory[i] << endl << Gems << endl;
		}

		break;
	case 2:

		break;
	default:
		return sword(inventory, Gems, option);
		break;
	}
	return;
}

void shield(vector<string>& inventory, int Gems, int option)
{
	cleanmirror();
	cout << "you found a one shield, Would you like to keep it in inventory?\n1.Yes \n2.no" << endl;
	cin >> option;
	switch (option)
	{
	case 1:
		cout << "choose a space: 1.-0, 2.-1, 3.-2,4.-3,5,-4,6.-5,7.-6,8.-7,9.-8,0.-9" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			inventory[0] = "shield";
			break;
		case 2:
			inventory[1] = "shield";
			break;
		case 3:
			inventory[2] = "shield";
			break;
		case 4:
			inventory[3] = "shield";
			break;
		case 5:
			inventory[4] = "shield";
			break;
		case 6:
			inventory[5] = "shield";
			break;
		case 7:
			inventory[6] = "shield";
			break;
		case 8:
			inventory[7] = "shield";
			break;
		case 9:
			inventory[8] = "shield";
			break;
		case 0:
			inventory[9] = "shield";
			break;
		default:
			return shield(inventory, Gems, option);
			break;
		}
		for (unsigned int i = 0; i < inventory.size(); i++)
		{
			cout << inventory[i] << endl << Gems << endl;
		}

		break;
	case 2:

		break;
	default:
		return shield(inventory, Gems, option);
		break;
	}
	return;
}

void armor(vector<string>& inventory, int Gems, int option)
{
	cleanmirror();
	cout << "you found a one armor, Would you like to keep it in inventory?\n1.Yes \n2.no" << endl;
	cin >> option;
	switch (option)
	{
	case 1:
		cout << "choose a space: 1.-0, 2.-1, 3.-2,4.-3,5,-4,6.-5,7.-6,8.-7,9.-8,0.-9" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			inventory[0] = "armor";
			break;
		case 2:
			inventory[1] = "armor";
			break;
		case 3:
			inventory[2] = "armor";
			break;
		case 4:
			inventory[3] = "armor";
			break;
		case 5:
			inventory[4] = "armor";
			break;
		case 6:
			inventory[5] = "armor";
			break;
		case 7:
			inventory[6] = "armor";
			break;
		case 8:
			inventory[7] = "armor";
			break;
		case 9:
			inventory[8] = "armor";
			break;
		case 0:
			inventory[9] = "armor";
			break;
		default:
			return armor(inventory, Gems, option);
			break;
		}
		for (unsigned int i = 0; i < inventory.size(); i++)
		{
			cout << inventory[i] << endl << Gems << endl;
		}

		break;
	case 2:

		break;
	default:
		return armor(inventory, Gems, option);
		break;
	}
	return;
}

void axe(vector<string>& inventory, int Gems, int option)
{
	cleanmirror();
	cout << "you found a one axe, Would you like to keep it in inventory?\n1.Yes \n2.no" << endl;
	cin >> option;
	switch (option)
	{
	case 1:
		cout << "choose a space: 1.-0, 2.-1, 3.-2,4.-3,5,-4,6.-5,7.-6,8.-7,9.-8,0.-9" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			inventory[0] = "axe";
			break;
		case 2:
			inventory[1] = "axe";
			break;
		case 3:
			inventory[2] = "axe";
			break;
		case 4:
			inventory[3] = "axe";
			break;
		case 5:
			inventory[4] = "axe";
			break;
		case 6:
			inventory[5] = "axe";
			break;
		case 7:
			inventory[6] = "axe";
			break;
		case 8:
			inventory[7] = "axe";
			break;
		case 9:
			inventory[8] = "axe";
			break;
		case 0:
			inventory[9] = "axe";
			break;
		default:
			return axe(inventory, Gems, option);
			break;
		}
		for (unsigned int i = 0; i < inventory.size(); i++)
		{
			cout << inventory[i] << endl << Gems << endl;
		}

		break;
	case 2:

		break;
	default:
		return axe(inventory, Gems, option);
		break;
	}
	return;
}


void travel(vector<string>& inventory, int Gems, int option)
{
	int adventure;
	cout << "choose a option random, 1 a 6" << endl;
	cin >> adventure;
	switch (adventure)
	{
	case 1:
		potion(inventory, Gems, option);
		break;
	case 2:
		sword(inventory, Gems, option);
		break;
	case 3:
		shield(inventory, Gems, option);
		break;
	case 4:
		axe(inventory, Gems, option);
		break;
	case 5:
		gema(inventory, Gems, option);
		break;
	default:
		return travel(inventory, Gems, option);
		break;
	}
}



void cleanmirror()
{
	if (system("cls") == -1) {
		cout << "sorry, this is not option" << endl;
	}
}