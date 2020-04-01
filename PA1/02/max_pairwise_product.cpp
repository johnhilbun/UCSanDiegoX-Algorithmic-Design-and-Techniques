#include <iostream>
#include <vector>
#include <algorithm> // JDH added

using std::vector;
using std::cin;
using std::cout;
using std::find;	// JDH added

// JDH change vector values to long instead of int
long MaxPairwiseProduct(const vector<long>& numbers) {
  long result = 0;	// WAS int
/*
  int n = numbers.size();
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (numbers[i] * numbers[j] > result) {
        result = numbers[i] * numbers[j];
      }
    }
  }
  */
  long max1 = 0;
  long max2 = 0;
  vector<long> local_numbers;
  local_numbers = numbers;
  max1 = *max_element (local_numbers.begin(), local_numbers.end());
  local_numbers.erase(find(local_numbers.begin(), local_numbers.end(), max1));
  max2 = *max_element (local_numbers.begin(), local_numbers.end());
  result = max1 * max2;
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
