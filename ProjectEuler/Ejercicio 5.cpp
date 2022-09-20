//2520 es el número más pequeño que se puede dividir por cada uno de los números del 1 al 10 sin que quede ningún resto.
//¿Cuál es el número positivo más pequeño que es divisible por todos los números del 1 al 20?
#include <iostream>

// greatest common divisor
unsigned long long gcd(unsigned long long a, unsigned long long b)
{
  while (a != 0)
  {
    unsigned long long c = a;
    a = b % a;
    b = c;
  }
  return b;
}

// least common multiple
unsigned long long lcm(unsigned long long a, unsigned long long b)
{
  // parenthesis avoid overflow
  return a * (b / gcd(a, b));
}

int main()
{
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned int x;
    std::cin >> x;

    // find least common multiple of all numbers
    unsigned long long result = 1;
    for (unsigned int i = 2; i <= x; i++)
      result = lcm(result, i);

    std::cout << result << std::endl;
  }
  return 0;
}
