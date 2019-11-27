#include <iostream>
using namespace std;
int main()
{
  float first, second, third;
  cout << "Enter first number: ";
  cin >> first;
  cout << "Enter second number: ";
  cin >> second;
  cout << "Enter third number: ";
  cin >> third;

  cout << "Average is: " << (first + second + third) / 3.0 << endl;
  return 0;
}
