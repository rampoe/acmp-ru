#include <iostream>

int main()
{
  int n;
  std::cin >> n;
  if (n % 2 == 0)
  {
    std::cout << n / 2;
  }
  else if (n == 1)
  {
    std::cout << 0;
  }
  else
  {
    std::cout << n;
  }
  return 0;
}