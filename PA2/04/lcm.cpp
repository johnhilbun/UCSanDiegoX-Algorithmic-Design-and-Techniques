#include <iostream>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

long lcd_fast (long dividend, long divisor) {	// JDH added
	long remainder = 0;

	if (divisor == 0)	// was <= 1
		return dividend;

	remainder = dividend % divisor;
	return (lcd_fast (divisor, remainder));
}

long long lcm_fast (long a, long b) {	// JDH added

	return (a * b / lcd_fast (a, b));
}

int main() {
  long a, b;	// JDH original int
  std::cin >> a >> b;
  // std::cout << lcm_naive(a, b) << std::endl;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
