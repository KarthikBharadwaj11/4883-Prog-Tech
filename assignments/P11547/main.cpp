#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int t, n;

  cin >> t;
  while (t--) {
    cin >> n;

    int answer = ((((n * 567) / 9 + 7492) * 235 / 47) - 498);
    int digit = abs((answer / 10) % 10);
    cout << digit << endl;
  }
}
