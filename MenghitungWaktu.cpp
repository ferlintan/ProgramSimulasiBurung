#include <bits/stdc++.h>
using namespace std;
// rumus waktu=2(v*sin(s))/10
int main()
{
	cout << "Menghitung waktu yang diperlukan Boro untuk mencapai jarak horizontal terjauh\n";
	float v, s, waktu = 0, selisih;
	cout << "Masukan Sudut Peluncuran Boro : ";
	cin >> s; 
	cout << endl;
	cout << "Masukan Kecepatan Awal Meluncur Boro : ";
	cin >> v;
	cout << endl;
	float sinA = sin(s * 22 / 7 / 180);
	waktu = (2 * (v * sinA)) / 10;
    cout << "Waktu yang diperlukan adalah : " << fixed << setprecision(3) <<waktu;
}
