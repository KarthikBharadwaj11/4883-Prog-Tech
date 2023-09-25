// Name: Karthik Bharadwaj Surya Prakash Hodegere
// Programming Techniques
// Assignment 04(Easy breezy) - Peter's smokes (P10346)
// Description: In this program, we are calculating the total number of
// ciggerates Peter can make from n ciggerates and k butts per ciggerate made.

#include <iostream>

using namespace std;

int main() {
  int n, k; // n - total ciggerates he smokes and k - number of butts needed to
            // make a ciggerate
  int max;
  while (cin >> n >> k) {
    max = n + (n - 1) / (k - 1);
    cout << max << endl;
  }
}