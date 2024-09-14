#include <iostream>

using namespace std;

int main (){
	
	string namaDepan, namaTengah;
	float tugas, quiz, uts, sum, rerata;
	
	
	cout<<"====================\n";
	cout<<"Program ini dibuat untuk menentukan nilai akhir Matematika diskrit.\n";
	cout<<" "<<endl;
	cout<<"Masukkan nama siswa: \n";
	cin>>namaDepan>>namaTengah; //masukkan dua suku kata nama paling yang dipisah dengan spasi
	cout<<"Masukkan nilai tugas: \n";
	cin>>tugas;
	cout<<"Masukkan nilai quiz: \n";
	cin>>quiz;
	cout<<"Masukkan nilai UTS: \n";
	cin>>uts;
	
	sum = tugas + quiz + uts;
	
	rerata = sum/3;
	
		if (rerata>= 85) {
		cout<<"Predikat A.\n";
		}else if (rerata<85 && rerata>=70) {
		cout<<"Predikat B.\n";
	    } else {
		cout<<"Predikat C.\n";
	    }
       

	
	return 0;
	
}
	
	
	

	
	
	
