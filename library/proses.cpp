#include "base.h"
using namespace std;

void BaseProject::proses(){
  for(a = 0; a < jumlah_jenis; a++){
  	for(b = 0; b < jumlah_karyawan; b++){
    	for(int c = 0; c < jumlah_jenis; c++){
    		for(int d = 0; d < jumlah_karyawan; d++){
        	if(nama_karyawan[a][b] < nama_karyawan[c][d]){
          	temp1 = nama_karyawan[a][b];     
            nama_karyawan[a][b] = nama_karyawan[c][d];
            nama_karyawan[c][d] = temp1;
               
          	temp2 = jenis_karyawan[a][b];     
            jenis_karyawan[a][b] = jenis_karyawan[c][d];
            jenis_karyawan[c][d] = temp2;

          	temp3 = alamat_karyawan[a][b];
        		alamat_karyawan[a][b] = alamat_karyawan[c][d];
            alamat_karyawan[c][d] = temp3;
    			}
    		}
   		}
   	}
  }
}