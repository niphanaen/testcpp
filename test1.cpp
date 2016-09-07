#include <iostream>

int main ()
{
  int i = 100;
  int &r = i;

  r = 101;

  std::cout << i << " " << r << std::endl;
  return 0;
}