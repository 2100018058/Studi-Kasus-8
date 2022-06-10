#include <iostream>
#include <string.h>

using namespace std;

class BaseProject {
public:
  void input();
  void output();
  void proses();
  void cari();

private:
  int a, b, cari_karyawan;
  int jumlah_jenis_karyawan, nama_buku;
  string alamat_karyawan[100][100], jenis_kelamin[100][100],
      jenis_karyawan[100], nama_karyawan[100][100];
  string temp1, temp2, temp3;
};

// Input
void BaseProject::input() {
  cout << "Banyak Jenis Karyawan	: ";
  cin >> jumlah_jenis_karyawan;
  for (a = 0; a < jumlah_jenis_karyawan; a++) {
    cout << "Nama Jenis karyawan ke-" << a + 1 << "    : ";
    cin >> jenis_karyawan[a];
    cout << "Banyak Karyawan Berjenis " << jenis_karyawan[a] << "	: ";
    cin >> nama_buku;
    for (b = 0; b < nama_buku; b++) {
      cout << "Nama karyawan    : ";
      cin >> nama_karyawan[a][b];
      cin.ignore();
      cout << "Alamat karyawam   : ";
      getline(cin, alamat_karyawan[a][b]);
      cout << "Jenis Kelamin : ";
      getline(cin, jenis_kelamin[a][b]);
    }
    cout << endl;
  }
  cout << endl;
}

// proses
void BaseProject::proses() {
  for (a = 0; a < jumlah_jenis_karyawan; a++) {
    for (b = 0; b < nama_buku; b++) {
      for (int c = 0; c < jumlah_jenis_karyawan; c++) {
        for (int d = 0; d < nama_buku; d++) {
          if (nama_karyawan[a][b] < nama_karyawan[c][d]) {
            temp1 = nama_karyawan[a][b];
            nama_karyawan[a][b] = nama_karyawan[c][d];
            nama_karyawan[c][d] = temp1;

            temp2 = alamat_karyawan[a][b];
            alamat_karyawan[a][b] = alamat_karyawan[c][d];
            alamat_karyawan[c][d] = temp2;

            temp3 = jenis_kelamin[a][b];
            jenis_kelamin[a][b] = jenis_kelamin[c][d];
            jenis_kelamin[c][d] = temp3;
          }
        }
      }
    }
  }
}

// output
void BaseProject::output() {
  cout << "========================================================================"<< endl;
  cout << "|   Jenis karyawan   |    Nama      |     Alamat     |    Jenis Kelamin   |"<< endl;
  cout << "========================================================================"<< endl;
  for (a = 0; a < jumlah_jenis_karyawan; a++) {
    cout << " " << jenis_karyawan[a] << "\t\t";
    for (b = 0; b < nama_buku; b++) {
      cout << "\t\t" << nama_karyawan[a][b];
      cout << "\t\t" << alamat_karyawan[a][b];
      cout << "\t\t" << jenis_kelamin[a][b] << endl;
      cout << "\t\t";
    }
    cout << endl;
  }
}
