#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa
{
	string NIM;
	string nama;
	AlamatDetail alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;

	cout << "Masukan NIM :";
	cin >> mhs.NIM;
	cout << "Masukan nama :";
	cin >> mhs.nama;
	cout << "Alamat :";
	cout << "\n\tMasukan desa :";
	cin >> mhs.alamat.desa;
	cout << "\tMasukan kota :";
	cin >> mhs.alamat.kota;
	cout << "Masukan umur :";
	cin >> mhs.umur;
}


