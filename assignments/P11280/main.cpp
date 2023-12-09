// 11280 - Flying to Fredericton
//  Karthik Bharadwaj Surya

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  int S;

  cin >> S;

  for (int i = 1; i <= S; i++) {
    int N;
    cin >> N;
    map<string, int> postions;

    string city1, city2;

    for (int i = 0; i < N; i++) {
      cin >> city1;
      postions[city1] = i;
    }

    vector<vector<int>> flightCost(N, vector<int>(N, -1));

    int M;

    cin >> M;

    for (int i = 0; i < M; i++) {
      int cost;

      cin >> city1 >> city2 >> cost;

      int src = postions[city1], dest = postions[city2];

      if (flightCost[src][dest] == -1 || flightCost[src][dest] > cost)
        flightCost[src][dest] = cost;
    }

    vector<vector<int>> totalCost(N, vector<int>(N, -1));
    totalCost[0][0] = 0;

    // city = source city
    // flyTo = Destination city
    // flightNum = Number of flights taken

    // The following logic was taken from Chat GPT (but I took time to
    // understand it)
    for (int city = 0; city < N - 1; city++) {
      for (int flightNum = 0; flightNum < N - 1; flightNum++) {
        for (int flyTo = city + 1; flyTo < N; flyTo++) {
          if (flightCost[city][flyTo] != -1 &&
              totalCost[city][flightNum] != -1 &&
              (totalCost[flyTo][flightNum + 1] == -1 ||
               totalCost[flyTo][flightNum + 1] >
                   totalCost[city][flightNum] + flightCost[city][flyTo]))
            totalCost[flyTo][flightNum + 1] =
                totalCost[city][flightNum] + flightCost[city][flyTo];
        }
      }
    }

    vector<int> cheapest(N);
    cheapest[0] = -1; // No flight exists

    for (int i = 1; i < N; i++) {
      if (cheapest[i - 1] != -1 && totalCost[N - 1][i] != -1)
        cheapest[i] = min(cheapest[i - 1], totalCost[N - 1][i]);

      else
        cheapest[i] = max(cheapest[i - 1], totalCost[N - 1][i]);
    }

    cout << "Scenario #" << i << '\n';

    int Q;
    cin >> Q;

    while (Q--) {
      int totalFlights;
      cin >> totalFlights;
      totalFlights++;

      if (totalFlights >= N)
        totalFlights = N - 1;

      if (cheapest[totalFlights] != -1)
        cout << "Total cost of flight(s) is $" << cheapest[totalFlights]
             << '\n';

      else
        cout << "No satisfactory flights\n";
    }
    cout << "\n";
  }
}