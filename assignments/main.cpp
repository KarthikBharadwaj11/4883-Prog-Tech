/**
 * Karthik Bharadwaj Surya Prakash Hodegere
 * 4883 - Programming Techniques 
 * 09/04/2023
 */
#include <iostream>

#define endl "\n"

using namespace std;

int main() {
  long B = 0, A = 0;

  while (cin >> A >> B) {
    if (A>B)
      cout<< A-B << endl;
    else if (B>A)
      cout<< B-A << endl;

  }
  return 0;
}