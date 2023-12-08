// P12578  - 10:6:2
// Karthik Bharadwaj Surya

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int L;
    cin >> L;
    double W, R, A1, A2;
    W = (6.0 / 10) * L;
    R = (1.0 / 5) * L;
    // cout << L << endl;
    // cout << W << endl;
    // cout << R << endl;
    A1 = M_PI * R * R;
    A2 = (L * W) - A1;
    cout << fixed << setprecision(2);
    cout << A1 << " " << A2 << endl;
    // cout << A2 << endl;
  }
}