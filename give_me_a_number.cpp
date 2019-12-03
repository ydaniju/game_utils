// Give Me a Number
// Demonstrates default function arguments

#include <iostream>
#include <string>

using namespace std;

int askNumber(int hi, int lo = 1);

int main()
{
  int number = askNumber(5);

  cout << "Thanks for entering: " << number << "\n\n";
  number = askNumber(10, 5);
  cout << "Thanks for entering: " << number << "\n\n";

  return 0;
}

int askNumber(int hi, int lo)
{
  int num;

  do
  {
    cout << "Please enter a number"
         << " (" << lo << " - " << hi << "): ";
    cin >> num;
  } while (num > hi || num < lo);
  
  return num;
}
