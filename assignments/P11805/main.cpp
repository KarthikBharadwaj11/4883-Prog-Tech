// 11805 - Bafana Bafana
#include <iostream>

using namespace std;

int main() {
  int T, N, K, P;
  cin >> T;
  for (int i = 1; i <= T; i++) {
    cin >> N >> K >> P;
    // Formula used to find out who the player final player is:
    int finalPlayer = (K + P - 1) % N + 1;
    cout << "Case " << i << ": " << finalPlayer << endl;
  }
}
