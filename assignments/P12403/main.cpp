// Save Setu - 12403
#include <iostream>
using namespace std;

int main() {
  int T, K;
  int count = 0;
  string S;
  cin >> T;
  while (T--) {
    cin >> S;
    if (S == "donate") {
      cin >> K;
      count = count + K;
    } else {
      cout << count << endl;
    }
  }
}