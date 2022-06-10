#include "base.h"
using namespace std;

void BaseProject::input(){
  cout<<"Banyak Divisi Karyawan : "; cin>>jumlah_jenis;
for(int a=0; a<jumlah_jenis; a++){
  cout<<"Nama Divisi - "<<a+1<<" : "; cin>>jenis_karyawan[a];
  cout<<"Banyak Anggota Divisi"<<jenis_karyawan[a]<<" : "; cin>>nama_divisi;
  for(int b=0; b<nama_divisi; b++){
    cout<<"Nama karyawan : "<<getline(cin,nama_karyawan[a][b]);
    cout<<"Alamat :  "<<getline(cin, alamat[a][b]);
    cout<<"Jenis Kelamin : "<<getline(cin, jenis_kelamin[a][b]);
  }
  cout<<endl;
}
  cour<<endl;
}