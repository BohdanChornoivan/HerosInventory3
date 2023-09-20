#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string SWORD = "sword";
	string AXE = "battle axe";
	string ARMOR = "armor";
	string SHIELD = "shield";
	string CROSSBOW = "crossbow";

	vector<string> inventory;
	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;
	
	inventory.push_back(SWORD);
	inventory.push_back(ARMOR);
	inventory.push_back(SHIELD);

	cout << "Your items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter << endl;
	}

	cout << "\n\nYou trade your sword for a battle axe.\n";
	myIterator = inventory.begin();
	*myIterator = AXE;
	cout << "Your items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter << endl;
	}

	cout << "\nThe item name 'battle axe' has " << (*myIterator).size() << " letters in it." << endl;
	cout << "\nThe item name 'battle axe' has '" << myIterator->size() << " letters in it." << endl;

	cout << "\nYou recover a crossbow from a slain enemy.\n";
	inventory.insert(inventory.begin(), CROSSBOW);
	cout << "Your items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter << endl;
	}

	cout << "\nYour armor is destroyed in a fierce battle.\n";
	inventory.erase(inventory.begin() += 2);
	cout << "Your items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter << endl;
	}
}