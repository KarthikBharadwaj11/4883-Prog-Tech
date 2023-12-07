// Automate the grades

#include <iostream>
using namespace std;

int main() {
  int T, t1, t2, f, a, ct1, ct2, ct3;
  int max1, max2, avg, sum;

  cin >> T;
  for (int i = 1; i <= T; i++) {
    cin >> t1 >> t2 >> f >> a >> ct1 >> ct2 >> ct3;
    // cout << t1 << " " << t2 << " " << f << " " << a << " " << ct1 << " " <<
    // ct2 << " " << ct3 << endl;
    if (ct1 > ct2) {
      max1 = ct1;
      max2 = ct2;
    } else {
      max1 = ct2;
      max2 = ct1;
    }
    if (ct3 > max1) {
      max2 = max1;
      max1 = ct3;
    } else if (ct3 > max2) {
      max2 = ct3;
    }
    // cout << i << endl;
    // cout << max1 << " " << max2 << endl;
    avg = ((max1 + max2) / 2);
    // cout << avg << endl;
    //  cout << avg << endl;
    sum = t1 + t2 + f + a + avg;
    // cout << sum << endl;

    if (sum >= 90) {
      cout << "Case " << i << ": "
           << "A" << endl;
    } else if (sum >= 80 && sum < 90) {
      cout << "Case " << i << ": "
           << "B" << endl;
    } else if (sum >= 70 && sum < 80) {
      cout << "Case " << i << ": "
           << "C" << endl;
    } else if (sum >= 60 && sum < 70) {
      cout << "Case " << i << ": "
           << "D" << endl;
    } else {
      cout << "Case " << i << ": "
           << "F" << endl;
    }
  }
}