// P541 - Error Correction
// Karthik Bharadwaj Surya

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;

  while (cin >> n && n != 0) {
    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> matrix[i][j];
        // cout << matrix[i][j] << " ";
      }
    }

    int row_count = 0;
    int column_count = 0;
    int rowOdd = -1;
    int colOdd = -1;

    for (int i = 0; i < n; i++) {
      int row_sum = 0;
      int col_sum = 0;
      for (int j = 0; j < n; j++) {
        row_sum += matrix[i][j];
        col_sum += matrix[j][i];
      }

      if (row_sum % 2 != 0) {
        row_count++;
        rowOdd = i + 1;
      }

      if (col_sum % 2 != 0) {
        column_count++;
        colOdd = i + 1;
      }
    }

    if (row_count == 0 && column_count == 0) {
      cout << "OK" << endl;
    } else if (row_count == 1 && column_count == 1) {
      cout << "Change bit (" << rowOdd << "," << colOdd << ")" << endl;
    } else {
      cout << "Corrupt" << endl;
    }
  }

  return 0;
}
