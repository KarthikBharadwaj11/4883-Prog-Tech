// 579 - Clock Hands
// Karthik  Bharadwaj Surya

#include <iomanip>
#include <iostream>
using namespace std;

// function to return the minimum value
double min(double x, double y) { return (x < y) ? x : y; }

int main() {
  double h, m;
  char colon;
  while (cin >> h >> colon >> m) {
    if (h == 0.00) {
      break;
    } else {
      if (h == 12)
        h = 0;
      if (m == 60) {
        m = 0;
        h = h + 1;
        if (h > 12) {
          h = h - 12;
        }
      }

      float h_angle = 0.5 * (h * 60 + m);
      float m_angle = 6 * m;

      float angle = abs(h_angle - m_angle);
      angle = min(360 - angle, angle);

      cout << fixed << setprecision(3) << angle << endl;
    }
  }
}