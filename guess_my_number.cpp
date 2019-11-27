// Guess My Number v2
// This is Yusuf Daniju's implementation
/**
 * Write a new version of the Guess My Number program in which the player and 
 * the computer switch roles. That is, the player picks a number and the 
 * computer must guess what it is.
 **/
#include <iostream>
#include <ctime>
#include <string>

int main()
{
  // Seed random numbers
  std::srand(static_cast<unsigned int>(time(0)));
  int myGuess;
  std::cout << "Please enter any number: ";
  std::cin >> myGuess;
  
  // int secretNumber = std::rand() % 100 + 1;
  int tries = 0;
  bool guessed = false;
  int comGuess;

  time_t start = time(0);
  std::cout << "Started guessing at: " << std::ctime(&start) << std::endl;

  while (!guessed)
  {
    comGuess = rand();
    if (comGuess == myGuess) {
      guessed = true;
    }
    tries++;
  }
  time_t end = time(0);
  std::cout << "That's it! COM got it in " << tries << " guesses." << std::endl;
  std::cout << "Ended guess at: " << std::ctime(&end) << std::endl;

  return 0;
}

// // Guess My Number v1
// // This is Yusuf Daniju's implementation
// #include <iostream>
// #include <ctime>
// #include <string>

// int main()
// {
//   // Seed random numbers
//   std::srand(static_cast<unsigned int>(time(0)));
//   int secretNumber = std::rand() % 100 + 1;

//   const int MAX_GUESS = 7;
//   int tries = 0;
//   int myGuess;
//   bool win = false;

//   while (tries < MAX_GUESS)
//  {
//     std::cout << "Please guess a number: ";
//     std::cin >> myGuess;
//     tries++;
//     if (myGuess == secretNumber) {
//       win = true;
//       break;
//     } else {
//       if (myGuess > secretNumber) {
//         std::cout << myGuess << " is high!" << std::endl;
//       } else {
//         std::cout << myGuess << " is low!" << std::endl;
//       }
//     }
//   }

//   if (win) {
//     std::cout << "That's it! You got it in " << tries
//       << " guesses." << std::endl;
//   } else {
//     std::cout << "You loose! " << secretNumber
//       << " is the number!" << std::endl;
//   }

//   return 0;
// }
