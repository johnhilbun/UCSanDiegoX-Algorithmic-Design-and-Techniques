#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

// JDH change vector values to long instead of int
long MaxPairwiseProduct(const vector<long>& numbers) {
  long result = 0;	// WAS int
  int n = numbers.size();
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (numbers[i] * numbers[j] > result) {
        result = numbers[i] * numbers[j];
      }
    }
  }
  return result;
}

int main() {
    int n;
    cin >> n;
    vector<long> numbers(n);	// WAS int
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    long result = MaxPairwiseProduct(numbers); // WAS int
    cout << result << "\n";
    return 0;
}
