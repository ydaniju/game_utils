#include <iostream>
int fibonacci(int n);

int main()
{
  for (int i = 1; i < 10; i++)
  {
    if (i % 2 == 0) std::cout << fibonacci(i) << std::endl;
  }

  return 0;
}

int fibonacci(int n)
{
  int tmp, a = 0, b = 1;

  while (n > 1) {
    tmp = a;
    a = b;
    b = tmp + a;
    n--;
  }

  return a;
}
