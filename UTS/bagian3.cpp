#include <iostream>
#include <vector>
#include <string>

using namespace std;

void bubbleSort(vector<string>& arr) {
    int n = arr.size();
    int comparisons = 0;
    int swaps = 0;
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaps++;
                swapped = true;
                // Tampilkan array setelah swap
                cout << "Iterasi " << i + 1 << ", Swap " << swaps << ": ";
                for (const auto& kota : arr) {
                    cout << kota << " ";
                }
                cout << endl;
            }
        }
        if (!swapped) break; // Jika tidak ada swap, array sudah terurut
    }

    cout << "Jumlah perbandingan: " << comparisons << endl;
    cout << "Jumlah pertukaran: " << swaps << endl;
}

int main() {
    vector<string> kota = {"K", "B", "M", "F", "A", "P", "D", "H", "C", "N", "L", "E", "O", "G", "J"};

    cout << "Array awal: ";
    for (const auto& k : kota) {
        cout << k << " ";
    }
    cout << endl << endl;

    bubbleSort(kota);

    cout << endl << "Array terurut: ";
    for (const auto& k : kota) {
        cout << k << " ";
    }
    cout << endl;

    return 0;
}