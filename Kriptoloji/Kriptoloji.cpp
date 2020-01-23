// Kriptoloji.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <clocale>
#include <string>
#include "Sezar.h"
#include "Rot13.h"
#include "Affine.h"
#include "Kaydirma.h"
#include "YerineKoyma.h"
#include "Permutasyon.h"
#include "YerDegistirmeSayili.h"
#include "Rota.h"
#include "ZigZag.h"
#include "Vigenere.h"
#include "Polybius.h"
#include "Playfair.h"
#include "Hill.h"
#include "DortKareMatris.h"
#include <Windows.h>

using namespace std;


int main()
{
	SetConsoleOutputCP(1254);
	SetConsoleCP(1254);

	Hill hill;
	DortKareMatris dortKareMatris;

	string mesaj;
	string key;

	int selector;
	cout << "13.Hill Sifreleme\n14.4-Kare Matris Sifreleme\nSelection: ";
	cin >> selector;
	system("cls");

	/*if (selector == 1) {
		cout << "Key giriniz(Max Alfabe Sayisi): ";
		cin >> key;
		sezar.Encryption(mesaj, key);
		cout << "Encrypted: " << mesaj<<"\n";
		sezar.Decryption(mesaj, key);
		cout << "Decrypted: " << mesaj<<"\n";
	}
	else if (selector == 2) {
		rot13.Encryption(mesaj);
		cout << "Encrypted: " << mesaj << "\n";
		rot13.Decryption(mesaj);
		cout << "Decrypted: " << mesaj << "\n";
	}
	else if (selector == 3) {
		cout << "Key giriniz(Max Alfabe Sayisi): ";
		cin >> key;
		int yon;
		cout << "\nYön Seç(1:Sag 2:Sol): ";
		cin >> yon;
		if (yon == 1) {
			kaydirma.Encryption(mesaj, key, true);
			cout << "Encrypted: " << mesaj << "\n";
			kaydirma.Decryption(mesaj, key, true);
			cout << "Decrypted: " << mesaj << "\n";
		}
		else if(yon==2){
			kaydirma.Encryption(mesaj, key, false);
			cout << "Encrypted: " << mesaj << "\n";
			kaydirma.Decryption(mesaj, key, false);
			cout << "Decrypted: " << mesaj << "\n";
		}
	}
	else if (selector == 4) {
		cout << "Key1 giriniz(Max Alfabe Sayisi): ";
		cin >> key;
		int key2;
		cout << "Key2 giriniz(Max Alfabe Sayisi): ";
		cin >> key2;
		affine.Encryption(mesaj, key, key2);
		cout << "Encrypted: " << mesaj << "\n";
		affine.Decryption(mesaj, key, key2);
		cout << "Decrypted: " << mesaj << "\n";
	}
	if (selector == 5) {

		yerinekoyma.Encryption(mesaj);
		cout << "Encrypted: " << mesaj << "\n";
		yerinekoyma.Decryption(mesaj);
		cout << "Decrypted: " << mesaj << "\n";
	}
	else if (selector == 6) {
		string key;
		cout << "Key giriniz(Örn: Mesaj:babadede Key:2413): ";
		cin >> key;
		permutasyon.Encryption(mesaj,key);
		cout << "Encrypted: " << mesaj << "\n";
		permutasyon.Decryption(mesaj, key);
		cout << "Decrypted: " << mesaj << "\n";
	}
	if (selector == 7) {
		string key;
		cout << "Key giriniz(Örn: Mesaj:columnartranspositionchiper Key:4315): ";
		cin >> key;
		yerdegistirmesayili.Encryption(mesaj, key);
		cout << "Encrypted: " << mesaj << "\n";
		yerdegistirmesayili.Decryption(mesaj, key);
		cout << "Decrypted: " << mesaj << "\n";
	}
	if (selector == 8) {
		cout << "Mesaj giriniz(Örn: Kerterizblogilesifreleme): ";
		cin >> mesaj;
		cout << "Key giriniz(Örn: 5): ";
		cin >> key;
		rota.Encryption(mesaj, key);
		cout << "Encrypted: " << mesaj << "\n";
		rota.Decryption(mesaj, key);
		cout << "Decrypted: " << mesaj << "\n";
	}
	if (selector == 9) {
		cout << "Mesaj giriniz(Örn: Istanbulticaretüniversitesi): ";
		cin >> mesaj;
		cout << "Key giriniz(Örn: 3): ";
		cin >> key;
		zigzag.Encryption(mesaj, key);
		cout << "Encrypted: " << mesaj << "\n";
		zigzag.Decryption(mesaj, key);
		cout << "Decrypted: " << mesaj << "\n";
	}
	if (selector == 10) {
		cout << "Mesaj giriniz(Örn: ALIBABAVEcinleri): ";
		cin >> mesaj;
		cout << "Key giriniz(Örn: AYVE): ";
		cin >> key;
		vigenere.Encryption(mesaj, key);
		cout << "Encrypted: " << mesaj << "\n";
		vigenere.Decryption(mesaj, key);
		cout << "Decrypted: " << mesaj << "\n";
	}
	if (selector == 11) {
		cout << "Mesaj giriniz(Örn: BENİMşifrem): ";
		cin >> mesaj;
		polybius.Encryption(mesaj);
		cout << "Encrypted: " << mesaj << "\n";
		polybius.Decryption(mesaj);
		cout << "Decrypted: " << mesaj << "\n";
	}
	if (selector == 12) {
		cout << "Mesaj giriniz(Örn: THE TREE STUMP BY): ";
		cin.ignore(); std::getline(std::cin, mesaj); 
		cout << "Key giriniz(Örn: PLAY): ";
		cin >> key;
		playfair.doIt(key,mesaj, true, true);
		playfair.doIt(key,mesaj, true, false);
		//cout << "Encrypted: " << mesaj << "\n";
		//playfair.Decryption(mesaj, key);
		//cout << "Decrypted: " << mesaj << "\n";
	}*/
	if (selector == 13) {
		cout << "Mesaj giriniz(Örn: ACT n=3): ";
		cin.ignore(); std::getline(std::cin, mesaj);
		cout << "Key giriniz(Örn: GYBNĞKURP n=9): ";
		cin >> key;
		hill.Encryption(mesaj, key);
		cout << "Encrypted: " << mesaj << "\n";
		hill.Decryption(mesaj, key);
		cout << "Decrypted: " << mesaj << "\n";
	}
	if (selector == 14) {
		string k1, k2;
		cout << "Mesaj giriniz(Örn: merhaba abdullah): ";
		cin.ignore(); std::getline(std::cin, mesaj);
		cout << "Keyleri giriniz(Örn: fire, ice): ";
		cin >> k1>>k2;
		int i, j, f = 0;
		dortKareMatris.table(k1, k2);
		cout << "Mesaj : ";
		f = dortKareMatris.convert(mesaj);
		cout << "\nEncrypted: ";
		dortKareMatris.encrypt(f); cout << "\n";
		cout << "Decrypted: ";
		dortKareMatris.decrypt(f); cout << "\n";
	}

	system("pause");
	
}

