#include <iostream>
using namespace std;

struct mahasiswa
{
	string NIM;
	string nama;
	string alamat;
	int umur;
};


int main() {
	mahasiswa mhs1, mhs2;

	mhs1.NIM = "20210140019";
	mhs1.nama = "Adrian Mulyo";
	mhs1.alamat = "Wonosobo";
	mhs1.umur = 20;

	cout << "Masukan NIM :";
	cin >> mhs2.NIM;
	cout << "Masukan nama :";
	cin >> mhs2.nama;
	cout << "Masukan alamat :";
	cin >> mhs2.alamat;
	cout << "Masukan umur :";
	cin >> mhs2.umur;

	cout << "\nNIM = " << mhs1.NIM;
	cout << "\nnama = " << mhs1.nama;
	cout << "\nalamat = " << mhs1.alamat;
	cout << "\numur = " << mhs1.umur;

	cout << "\n\nNIM = " << mhs2.NIM;
	cout << "\nnama = " << mhs1.nama;
	cout << "\nalamat = " << mhs1.alamat;
	cout << "\numur = " << mhs1.umur;
}