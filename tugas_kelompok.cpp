#include <iostream>
#include <vector>
using namespace std;


// Fungsi yang ditulis oleh Anggota 1 - Misalnya, Menambah dua bilangan
void aqila() {
    int a, b;
    cout << "Aqila: Masukkan dua bilangan untuk dijumlahkan: " << endl;
    cout << "Masukkan bilangan 1: ";
    cin >> a ;
    cout << "Masukkan bilangan 2: ";
    cin >> b;
    cout << "Hasil penjumlahan: " << a + b << endl;
}

// Fungsi yang ditulis oleh Anggota 2 - Misalnya, Menghitung Faktorial
void alif() {
    int n;
    cout << "Alif: Masukkan bilangan untuk dihitung faktorialnya: " << endl;
    cout << "Masukkan bilangan untuk dihitung faktorialnya: ";
    cin >> n;
    int faktorial = 1;
    for (int i = 1; i <= n; ++i) {
        faktorial *= i;
    }
    cout << "Faktorial: " << faktorial << endl;
}

// Fungsi yang ditulis oleh Anggota 3 - Misalnya, Mencari Bilangan Prima
void angga() {
    int n;
    cout << "Angga: Masukkan bilangan untuk diperiksa apakah prima: " << endl;
    cout << "Masukkan bilangan untuk diperiksa apakah prima: ";
    cin >> n;
    bool prima = true;
    if (n < 2) prima = false;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            prima = false;
            break;
        }
    }
    if (prima)
        cout << n << " adalah bilangan prima" << endl;
    else
        cout << n << " bukan bilangan prima" << endl;
}

// Fungsi yang ditulis oleh Anggota 4 - Misalnya, Menghitung Nilai Rata-rata dari Array
void edril() {
    int n;
    cout << "Edril Masukkan jumlah elemen array: " << endl;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    vector<int> arr(n);
    int sum = 0;
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    double rata_rata = static_cast<double>(sum) / n;
    cout << "Rata-rata: " << rata_rata << endl;
}

// Fungsi yang ditulis oleh Anggota 5 - Misalnya, Menukar Dua Bilangan
void musyafa() {
    int x, y;
    cout << "Musyafa: Masukkan dua bilangan untuk ditukar: ";
    cout << "Masukkan bilangan 1: ";
    cin >> x ;
    cout << "Masukkan bilangan 2: ";
    cin >> y;
    cout << "Sebelum penukaran: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "Setelah penukaran: x = " << x << ", y = " << y << endl;
}

int main() {
    int pilihan;
    cout << "Pilihan : " << endl;
    cout << "1. Aqila   : Masukkan dua bilangan untuk dijumlahkan          " << endl;
    cout << "2. Alif    : Masukkan bilangan untuk dihitung faktorialnya    " << endl;
    cout << "3. Angga   : Masukkan bilangan untuk diperiksa apakah prima   " << endl;
    cout << "4. Edril   : Masukkan jumlah elemen array                     " << endl;
    cout << "5. Musyafa : Masukkan dua bilangan untuk ditukar              " << endl;

    // Memanggil semua fungsi anggota satu per satu
    cout << "Masukkan pilihan : " ;
    cin >> pilihan ;
    switch (pilihan)
    {
    case 1:
        aqila();
        break;
    case 2 :
        alif();
        break;
    case 3 :
        angga();
        break;
    case 4 :
        edril();
        break;
    case 5 :
        musyafa();
        break;
    default:
        break;
    }

    return 0;
}
