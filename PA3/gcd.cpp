#include <iostream>

int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

long gcd_fast (long dividend, long divisor) {	// JDH added this function
	long result, remainder;

	if (divisor == 0)
		return dividend;

	remainder = dividend % divisor;
	result = gcd_fast (divisor, remainder);
	return (result);
}

int main() {
  long a, b;
  std::cin >> a >> b;
  // std::cout << gcd_naive(a, b) << std::endl;
  std::cout << gcd_fast(a, b) << std::endl;
  return 0;
}
