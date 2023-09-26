// Name: Karthik Bharadwaj Surya Prakash Hodegere
// 4883 - Programming Techniques
// Assignment 04(Easy breezy) - Egypt (11854)
// Description: In this program, we are determining whether the given sides of a
// traingle resembles a right angled triangle using Pythagoras Theorem

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int p = 2;
  int a, b, c;
  int hyp;

  while (cin >> a >> b >> c) {
    if (a == 0) {
      break;
    } else {
      hyp = max( a, max(b, c)); // assigning the max value of the input to hyp(hypotenuse)
      if (pow(hyp, p) == (pow(a, p) + pow(b, p) + pow(c, p)) -
                             pow(hyp, p)) // Using the Pythagorean formula
      {
        cout << "right" << endl;
      } else {
        cout << "wrong" << endl;
      }
    }
  }
}