// Finicky Counter
// Demonstrates break and continue statemments
#include <iostream>

using namespace std;

int main()
{
  int count = 0;

  while (true)
  {
    count += 1;

    // end loop if count is greater

    if (count > 10)
    {
      break;
    }

    //skip the number 5
    if (count == 5)
    {
      continue;
    }
    cout << count << endl;
  }
  return 0;
}
