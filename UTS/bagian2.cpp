#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    // Kota: 0=F, 1=G, 2=H, 3=I, 4=J
    vector<vector<int>> dist = {
        {0, 115, 210, 290, 390},
        {115, 0, 130, 190, 310},
        {210, 130, 0, 150, 260},
        {290, 190, 150, 0, 140},
        {390, 310, 260, 140, 0}
    };

    vector<int> cities = {1, 2, 3, 4}; // Permutasi kota selain F
    int min_distance = INT_MAX;
    vector<int> best_path;

    do {
        int current_distance = 0;
        int prev = 0; // Mulai dari F
        for (int city : cities) {
            current_distance += dist[prev][city];
            prev = city;
        }
        current_distance += dist[prev][0]; // Kembali ke F

        if (current_distance < min_distance) {
            min_distance = current_distance;
            best_path = cities;
        }
    } while (next_permutation(cities.begin(), cities.end()));

    // Output
    cout << "Rute terpendek: F";
    for (int city : best_path) {
        cout << " -> " << char('F' + city);
    }
    cout << " -> F" << endl;
    cout << "Total jarak: " << min_distance << " km" << endl;

    return 0;
}