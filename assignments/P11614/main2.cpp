// P11684 -

#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int testCases;
  cin >> testCases;

  for (int i = 0; i < testCases; ++i) {
    long long int warriors;
    cin >> warriors;

    // Calculate rows using a formula: rows = floor((-1 + sqrt(1 + 8 *
    // warriors)) / 2)
    int rows = static_cast<long long int>(
        (-1 + sqrt(1 + 8 * static_cast<double>(warriors))) / 2);

    cout << rows << '\n';
  }

  return 0;
}
