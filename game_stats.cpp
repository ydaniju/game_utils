// Game stats v3
// Demonstrates eclaring and initializing variables
#include <iostream>
using namespace std;

int main()
{
  const int ALIENT_POINTS = 150;
  int aliensKilled = 10;
  int score = aliensKilled * ALIENT_POINTS;
  cout << "score: " << score << endl;

  enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};

  difficulty myDifficulty = EASY;

  enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
  shipCost myShipCost = BOMBER_COST;

  cout << "\nTo upgrade my ship to a Cruiser will cost " << 
    (CRUISER_COST - myShipCost) << " Resource Points.\n";

  return 0;
}

// // Game stats v2
// // Demonstrates eclaring and initializing variables
// #include <iostream>
// using namespace std;

// int main()
// {
//   unsigned int score = 5000;
//   cout << "score: " << score << endl;

//   // altering the value of a variables
//   score = score + 100;
//   cout << "score: " << score << endl;

//   // combined assignment operator
//   score += 100;
//   cout << "score: " << score << endl;

//   // increment operators
//   int lives = 3;
//   ++lives;
//   cout << "lives: " << lives << endl;

//   lives = 3;
//   lives++;
//   cout << "lives: " << lives << endl;

//   lives = 3;
//   int bonus = ++lives * 10;
//   cout << "bonus: " << bonus << endl;

//   lives = 3;
//   bonus = lives++ * 10;
//   cout << "bonus: " << bonus << endl;

//   // integer wrap around
//   score = 4294967295;
//   cout << "\nscore: " << score << endl;
//   ++score;
//   cout << "score: " << score << endl;

//   return 0;
// }

// // Game stats v1
// // Demonstrates eclaring and initializing variables
// #include <iostream>
// using namespace std;

// int main()
// {
//   int score;
//   double distance;
//   char playAgain;
//   bool shieldsUp;

//   short lives, aliensKilled;

//   score = 0;
//   distance = 1200.76;
//   playAgain = 'y';
//   shieldsUp = true;
//   lives = 3;
//   aliensKilled = 10;

//   double engineTemp = 6572.89;

//   cout << "\nscore: " << score << endl;
//   cout << "distance: " << distance << endl;
//   cout << "playAgain: " << playAgain << endl;

//   cout << "lives: " << lives << endl;
//   cout << "aliensKilled: " << aliensKilled << endl;
//   cout << "engineTemp: " << engineTemp << endl;

//   int fuel;
//   cout << "How much fuel do you need?: ";
//   cin >> fuel;
//   cout << "fuel: " << fuel << endl;

//   typedef short unsigned int ushort;
//   ushort bonus = 10;
//   cout << "\nbonus: " << bonus << endl;
//   return 0;
// }