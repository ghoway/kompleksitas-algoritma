#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<char> arr, char target) {
    for (int i = 0; i < arr.size(); i++) {
        cout << "Mengecek iterasi ke " << i << " : " << (arr[i] == target ? "ditemukan" : "belum ditemukan") << endl;
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<char> cities = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'};
    char target = 'K';
    int index = linearSearch(cities, target);
    if (index != -1) {
        cout << "Kota " << target << " ditemukan di indeks " << index << endl;
    } else {
        cout << "Kota " << target << " tidak ditemukan" << endl;
    }
    return 0;
}