// hexadecimal_to_decimal_number.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>
#include <math.h>

//convert hexadecimal to decimal

using namespace std;

int main() {
	string hexadecimal;
	//cout << "hexadecimal : " << endl;
	cin >> hexadecimal;
	int length = hexadecimal.size();
	int decimal = 0,i,j=0;

	for (i = length - 1; i >= 0; i--) {
		if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9') {
			decimal += (int(hexadecimal[i]) - 48) * pow(16, j);
		}
		else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F') {
			decimal += (int(hexadecimal[i]) - 55) * pow(16, j);
		}
		j++;
	}
	cout << "decimal : " << decimal << endl;
	return 0;
}
