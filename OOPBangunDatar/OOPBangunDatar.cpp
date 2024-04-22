#include <iostream>
using namespace std;

class BangunDatar {
private:
	float panjang, lebar;
public:
	float luas;

	void input() {
		cout << "Masukkan Panjangnya : ";
		cin >> panjang;
		cout << "Masukkan Lebarnya : ";
		cin >> lebar;
	}
	float HitungLuas() {
		return panjang * lebar;
	}
};