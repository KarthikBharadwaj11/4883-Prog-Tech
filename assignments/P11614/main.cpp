// P11614 - Etruscan Warriors Never Play Chess

#include <iostream>

using namespace std;

int main() {
  long int testCases;
  cin >> testCases;

  for (int i = 0; i < testCases; i++) {
    long long int warriors;
    cin >> warriors;

    int rows = 0;
    int rowWarriors = 1;

    while (warriors >= rowWarriors) {
      warriors = warriors - rowWarriors;
      rowWarriors++;
      rows++;
    }

    cout << rows << endl;
  }

  return 0;
}