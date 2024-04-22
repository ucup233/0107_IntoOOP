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
	void display() {
		cout << "Panjangnya : " << panjang << endl;
		cout << "Lebarnya : " << lebar << endl;
		cout << "Luasnya : " << HitungLuas() << endl;
	}
};

int main() {
	BangunDatar pp;
	pp.input();
	pp.display();

	return 0;
}