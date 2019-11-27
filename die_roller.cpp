// Die Roller
// Demonstrates generating random number
#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
  // seed random number generator
  std::srand(static_cast<unsigned int>(time(0)));
  //generate random number
  int randomNumber = std::rand();
  // get a number between 1 and 6
  int die = randomNumber % 6 + 1;
  std::cout << "You rolled a " << die << std::endl;
  std::cout << time(0) << std::endl;
  return 0;
}