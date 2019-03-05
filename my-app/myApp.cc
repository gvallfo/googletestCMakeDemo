#include "sample1.h"
#include <iostream>

int main(int argc, char **argv)
{
  int n;
  std::cout << "Running main() from" << __FILE__ << std::endl;
  std::cout << "Enter a number: ";
  std::cin >> n;

  std::cout << n;
  if (IsPrime(n))
  {
    std::cout << " is a prime";
  }
  else
  {
    std::cout << " is not a prime";
  }
  std::cout << std::endl;
}
