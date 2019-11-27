// Convert bases
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string to_base(int num, int base, string answer = "");

int main()
{
  cout << to_base(1, 2) << endl;
  cout << to_base(1, 3) << endl;
  cout << to_base(2, 2) << endl;
  cout << to_base(2, 3) << endl;
  cout << to_base(3, 2) << endl;
  cout << to_base(3, 3) << endl;
  cout << to_base(4, 2) << endl;
  cout << to_base(4, 3) << endl;
  cout << to_base(5, 2) << endl;
  cout << to_base(5, 3) << endl;
  cout << to_base(6, 2) << endl;
  cout << to_base(6, 3) << endl;
  cout << to_base(7, 2) << endl;
  cout << to_base(7, 3) << endl;

  return 0;
}

string to_base(int num, int base, string answer)
{
  if (num <= 0) return answer;
  answer = std::to_string(num % base) + answer;
  num /= base;
  return to_base(num, base, answer);
}