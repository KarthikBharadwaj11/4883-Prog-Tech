// P11875 - Brick Game
// Karthik Bharadwaj Surya

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int i = 1; i <= T; i++) {
    int N;
    cin >> N;

    // Vector to store the ages
    vector<int> ages(N);
    for (int j = 0; j < N; j++) {
      cin >> ages[j];
    }

    // Find the captain's age (middle element)
    int middleIndex = N / 2;
    int captainAge = ages[middleIndex];

    cout << "Case " << i << ": " << captainAge << '\n';
  }

  return 0;
}