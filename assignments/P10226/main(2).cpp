// Name: Karthik Bharadwaj Surya Prakash Hodegere
// Assignment 06 - Hardwood Species (P10226)
// Description: In this program, we are calculating the percentages of the
// species of trees in a particular area observed by a satellite.

#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

// testCase function is used run a single test case. We'll be calling this
// function "n" times for n test cases in our main.
void TestCase() {
  map<string, int> count;
  int trees = 0;
  string species;
  // cin.ignore();
  //  This while loop reads the input from the input file, and stores each line
  //  of the input to the variable species.
  while (getline(cin, species)) {
    if (species.empty()) {
      break;
    }
    count[species]++;
    trees++;
  }

  for (const auto &i : count) {
    cout << i.first << " " << fixed
         << setprecision(4) // setprecision is used to specify the number of
                            // decimal values needed.
         << (static_cast<double>(i.second) / trees) * 100.0 << endl;
  }
}

int main() {
  int TestCases;

  while (cin >> TestCases) {

    cin.ignore(); // Ignoring the blank lines in the input file.

    for (int i = 0; i <= TestCases; i++) {

      if (i > 1) {
        cout << endl;
      }

      TestCase();
    }
  }

  return 0;
}
