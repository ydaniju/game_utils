// Menu Chooser Program v2
// The chapter 2 assignment version
// Reqrite cswitch cases using enum
#include <iostream>
using namespace std;

int main()
{
  cout << "Difficulty Levels\n\n";
  cout << "1 - Easy\n";
  cout << "2 - Normal\n";
  cout << "3 - Hard\n\n";

  int choice;
  enum difficulty { EASY = 1, NORMAL, HARD };
  cout << "Choice: ";
  cin >> choice;

  switch (choice)
  {
  case EASY:
    cout << "You picked Easy.\n";
    break;
  case NORMAL:
    cout << "You picked Normal.\n";
    break;
  case HARD:
    cout << "You picked Hard.\n";
    break;
  default:
    cout << "You made an illegal choice.\n";
    break;
  }

  return 0;
}

// // Menu Chooser Program v1
// #include <iostream>
// using namespace std;

// int main()
// {
//   cout << "Difficulty Levels\n\n";
//   cout << "1 - Easy\n";
//   cout << "2 - Normal\n";
//   cout << "3 - Hard\n\n";

//   int choice;
//   cout << "Choice: ";
//   cin >> choice;

//   switch (choice)
//   {
//   case 1:
//     cout << "You picked Easy.\n";
//     break;
//   case 2:
//     cout << "You picked Normal.\n";
//     break;
//   case 3:
//     cout << "You picked Hard.\n";
//     break;
//   default:
//     cout << "You made an illegal choice.\n";
//     break;
//   }

//   return 0;
// }
