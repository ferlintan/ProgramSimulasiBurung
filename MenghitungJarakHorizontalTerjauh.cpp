#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double jarak;
    int s;
    int v;
    double srad;

    cout << "Masukan Jarak Horizontal Burung Boro \n";
    cout << "Masukan Sudut : ";
    cin >> s;
    cout << "Masukan Kecepatan : ";
    cin >> v;
    srad = s * (3.14 / 180);
    jarak = v * v * sin(2 * srad) / 10;
    cout << fixed << setprecision(1) << jarak << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

