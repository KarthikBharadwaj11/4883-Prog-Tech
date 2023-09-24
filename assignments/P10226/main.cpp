// Name: Karthik Bharadwaj Surya Prakash Hodegere
// Assignment 06 - Hardwood Species (P10226)
// Description: In this program, we are calculating the percentages of the species of trees in a particular area observed by a satellite. 

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

// testCase function is used run a single test case. We'll be calling this
// function "n" times for n test cases in our main.
void TestCase() {
  map<string, int> count;
  int trees = 0;
  string species;
  // cin.ignore();
  //This while loop reads the input from the input file, and stores each line of the input to the variable species. 
  while (getline(cin, species)) {
    if (species.empty()) { // If there's no data in the input file and if its empty it breaks from the loop
      break;
    }
    //This counts the occurances of each species, count is referred to the map and everytime it encounters a specific species, it increments its value. 
    count[species]++;
    trees++;
  }

  
  for (const auto &i : count) {
    cout << i.first << " " << fixed << setprecision(4) //setprecision is used to specify the number of decimal values needed. 
         << (static_cast<double>(i.second) / trees) * 100.0 << endl;
  }
}

int main() {
  int TestCases;
  cin >> TestCases;

  cin.ignore(); // Ignoring the blank lines in the input file. 

  for (int i = 0; i <= TestCases; i++) {
    if (i > 0) {
      cout << endl;
    }

    TestCase();//calling the function for each test case
  }

  return 0;
}
