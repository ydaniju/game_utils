#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  vector<string> favoriteGames;
  vector<string>::const_iterator iter;
  string title;
  enum options {ADD, LIST, REMOVE, QUIT};
  int option;

  cout << "Type `0` to add a game title\n";
  cout << "Type `1` to list a game title\n";
  cout << "Type `2` to remove a game title\n";
  cout << "Type `3` to quit\n";

  while (option != QUIT)
  {
    cin >> option;

    switch (option)
    {
    case ADD:
      cout << "What is the title of the game you want to add?\n";
      cin >> title;
      favoriteGames.push_back((title));
      cout << "Game added!\n";
      cout << "Type `0` to add a game title\n";
      cout << "Type `1` to list a game title\n";
      cout << "Type `2` to remove a game title\n";
      cout << "Type `3` to quit\n";
      break;
    case LIST:
      cout << "Here is your list of favorite games:\n";
      for (iter = favoriteGames.begin(); iter != favoriteGames.end(); iter++)
      {
        cout << "\t" << *iter << endl;
      }
      cout << "Type `0` to add a game title\n";
      cout << "Type `1` to list a game title\n";
      cout << "Type `2` to remove a game title\n";
      cout << "Type `3` to quit\n";
      break;
    case REMOVE:
      cout << "What is the title of the game you want to remove?\n";
      cin >> title;
      iter = find(favoriteGames.begin(), favoriteGames.end(), title);
      if (iter != favoriteGames.end())
      {
        cout << "Request to delete " << *iter << " was successful\n";
        favoriteGames.erase(iter);
      }
      else
      {
        cout << "Game " << title << " does not exist\n"; 
      }
      cout << "Type `0` to add a game title\n";
      cout << "Type `1` to list a game title\n";
      cout << "Type `2` to remove a game title\n";
      cout << "Type `3` to quit\n";
      break;
    default:
      cout << "\nOption not recognised\n";
      cout << "Type `0` to add a game title\n";
      cout << "Type `1` to list a game title\n";
      cout << "Type `2` to remove a game title\n";
      cout << "Type `3` to quit\n";
      break;
    }
  }
  cout << "\n\nGoodbye!\n";

  return 0;
}