#include <iostream>
#include <string>

using namespace std;

// Tabel 1
char tabel1[4][4] = {
    {'A', 'B', 'C', 'D'},
    {'B', 'A', 'D', 'C'},
    {'C', 'D', 'A', 'B'},
    {'D', 'C', 'B', 'A'}
};

// Tabel 2
char tabel2[4][4] = {
    {'C', 'D', 'B', 'A'},
    {'B', 'C', 'D', 'A'},
    {'A', 'B', 'C', 'D'},
    {'D', 'A', 'B', 'C'}
};

// Fungsi untuk mengembalikan indeks dari karakter 'A', 'B', 'C', 'D'
int getIndex(char ch) {
    return ch - 'B';
}

// Fungsi untuk mendekripsi pesan
string dekripsi(string pesan) {
    int len = pesan.length();
    string hasil = "";

    for (int i = 0; i < len; i += 2) {
        char first = pesan[i];
        char second = pesan[i + 1];

        // Dekripsi dari Tabel 2 ke Tabel 1
        int indexFirst = getIndex(first);
        int indexSecond = getIndex(second);

        char decryptedFirst = tabel2[indexFirst][indexSecond];
        char decryptedSecond = tabel1[indexSecond][indexFirst];
        

        // Tambahkan ke hasil
        hasil += decryptedFirst;
        hasil += decryptedSecond;
    }

    return hasil;
}

int main() {
    string pesan;
    cin >> pesan;

    string pesanAsli = dekripsi(pesan);
    cout << pesanAsli << endl;

    return 0;
}

