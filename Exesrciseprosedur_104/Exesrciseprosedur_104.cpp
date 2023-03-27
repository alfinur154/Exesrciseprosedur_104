#include <iostream>
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double rata) {
	if (rata >= 70)
		return "Selamat Anda Lulus";
	else
		return "Maaf Anda Gagal";
}
string status2(double rata, double nil) {
	if (rata >= 70 || nil >= 80)
		return "Selamat Anda Lulus";
	else
		return "Maaf Anda Gagal";
}
string nama;
int j:

void input() {
	for (int i = 0; i < 20; i++) {
		cout << "masukkan nama = ";
	}
}	return



int main() {
	double nilm, nilB;
	cout << "masukkan nama kandidat = ";
	cin >> nama;
	cout << "masukkan nilai mtk = ";
	cin >> nilm;
	cout << "masukkan nilai bahasa inggris = ";
	cin >> nilB;
	cout << "status kelulusan = " << status(rerata(nilm, nilB));
	cout << "\nstatus kelulusan ke 2 = " << status2(rerata(nilm, nilB));


}