// P11799 - Horror Dash
// Karthik Bharadwaj Surya

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int testCase;
  cin >> testCase;

  for (int t = 1; t <= testCase; t++) {
    int N;
    cin >> N;
    vector<int> speed(N);

    for (int i = 0; i < N; i++) {
      cin >> speed[i];
    }
    // Formula to find the minimum speed the clown has to run in, in order to
    // not get caught. We're finding the maximum speed of the scary creatures
    // from the given input and that speed has // to be the minimum speed for
    // the clown to not get caught.
    int clownSpeed = *max_element(speed.begin(), speed.end());
    cout << "Case " << t << ": " << clownSpeed << endl;
  }
}