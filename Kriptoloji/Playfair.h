#include <iostream>
#include <string>

using namespace std;
/*Summary:
		Methods:
			doIt: Takes key, message and encrypt or decrypt and I or J arguments. 
			Chooses what to do and sends to create the grid and does playfair cipher by getChar and getTextReady methods.
			finally displays the encrypted or decrypted message.*/
class Playfair
{
public:
	void doIt(string k, string t, bool ij, bool e);

private:
	void doIt(int dir);

	void display(bool e);

	char getChar(int a, int b);

	bool getCharPos(char l, int& a, int& b);

	void getTextReady(string t, bool ij, bool e);

	void createGrid(string k, bool ij);
	
	string _txt; char _m[5][5];
};