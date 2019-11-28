#include <string>
#include <iostream>

using namespace std;

int main() {
  const int MAX_ITEMS = 10;
  string inventory[MAX_ITEMS];

  int numItems = 0;
  inventory[numItems++] = "sword";
  inventory[numItems++] = "armor";
  inventory[numItems++] = "shield";

  cout << "Your items:\n";
  for (int i = 0; i < numItems; i++)
  {
    cout << inventory[i] << endl;
  }

  cout << "\nYou trade your sword for a battle axe.\n\n";
  inventory[0] = "battle axe";

  cout << "Your items:\n";
  for (int i = 0; i < numItems; i++)
  {
    cout << inventory[i] << endl;
  }

  cout << "The item name " << inventory[0] << " has " <<
    inventory[0].size() << " characters in it.\n";

  cout << "You found a healing potion\n\n";

  if (numItems < MAX_ITEMS)
  {
    inventory[numItems++] = "healing potion";
  }
  else
  {
    cout << "You have too many items and can’t carry another.";
  }

  cout << "Your items:\n";
  for (int i = 0; i < numItems; i++)
  {
    cout << inventory[i] << endl;
  }

  return 0;
}
