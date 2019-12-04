#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

char getGuess();

int main()
{
  // setup
  const int MAX_WRONG = 8; //maximum number of incorrect guesses allowed

  vector<string> words; // collection of possible words to guess
  words.push_back("GUESS");
  words.push_back("HANGMAN");
  words.push_back("DIFFICULTY");

  srand(static_cast<unsigned int>(time(0)));
  random_shuffle(words.begin(), words.end());

  const string THE_WORD = words[0];   // word to guess
  int wrong = 0;                      // number of incorrect guesses
  string soFar(THE_WORD.size(), '-'); // word guessed so far
  string used = "";                   // letters already guessed

  cout << "Welcome to Hangman. Good luck!\n";

  // main loop
  while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
  {
    cout << "\nYou have " << (MAX_WRONG - wrong);
    cout << " incorrect guesses left.\n";
    cout << "You have used the following letters: \n";
    cout << used << endl;
    cout << "\nSo far, thw word is:\n" << soFar << endl; 

    char guess; 
    guess = getGuess();

    while (used.find(guess) != string::npos)
    {
      cout << "\nYou've already guessed " << guess << endl;
      guess = getGuess();
    }

    used += guess;

    if (THE_WORD.find(guess) != string::npos)
    {
      cout << "That's right " << guess << " is in the word.\n";

      // update soFar to include word
      for (int i = 0; i < THE_WORD.length(); i++)
      {
        if (THE_WORD[i] == guess)
        {
          soFar[i] = guess;
        }
      }
      
    }
    else
    {
      cout << "Sorry, " << guess << " is not in the word.\n";
      ++wrong;
    }
  }

  //shut down
  if (wrong == MAX_WRONG)
  {
    cout << "\nYou’ve been hanged!";
  }
  else
  {
    cout << "\nYou guessed it!";
  }
  cout << "\nThe word was " << THE_WORD << endl;

  return 0;
}

inline char getGuess()
{
  char guess;
  cout << "\n\nEnter your guess: ";
  cin >> guess;
  return toupper(guess);
}