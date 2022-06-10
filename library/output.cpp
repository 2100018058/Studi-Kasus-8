void BaseProject::output(){ 
	cout << "========================================================================"<<endl;
	cout << "| Divisi Karyawan | Nama | Alamat | Jenis Kelamin |"<<endl;
	cout << "========================================================================"<<endl;
		for(a=0; a < jumlah_jenis_karywan; a++){
		cout << " " << jenis_karyawan[a] << "\t\t";
    	for(b=0; b < banyak_jenis_karyawan; b++){
    		cout << "\t\t" << kode_karyawan[a][b];
    		cout << "\t\t" << nama_karyawan[a][b];
    		cout << "\t\t" << alamat_karyawan[a][b] <<endl;
			cout << "\t\t";
    	}
    	cout<<endl;
	/*}
	cout << "Pilih Divisi yang ingin dicari : "; cin >> cari_buku;
	cari_buku = b;
    if(b < 3){
    	a = b;
    	cout << "\t\t" << kode_karyawan[a][b];
    	cout << "\t\t" << nama_karyawan[a][b];
    	cout << "\t\t" << alamat_karyawan[a][b] <<endl;
		cout << "\t\t";
	}
	if(b > 2 && b < 6){
    	a = b;
    	cout << "\t\t" << kode_karyawan[a][b];
    	cout << "\t\t" << nama_karyawan[a][b];
    	cout << "\t\t" << alamat_karyawan[a][b] <<endl;
		cout << "\t\t";
	}
	if(b > 5 && b < 9){
    	a = b;
    	cout << "\t\t" << kode_karyawan[a][b];
    	cout << "\t\t" << nama_karyawan[a][b];
    	cout << "\t\t" << alamat_karyawan[a][b] <<endl;
		cout << "\t\t";*/
	}
}