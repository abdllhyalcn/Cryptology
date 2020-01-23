#pragma once
/** Summary:NOTE!!!
			29,31,32,33 are broken values for my charset which length is 30.
*/
class Affine
{
private:
	char Turkish[30] = {' ', 'a','b','c','ç','d','e','f','g','ð','h','ý','i','j','k','l','m','n','o','ö','p','r','s','þ','t','u','ü','v','y','z' };

public:
	void Encryption(char* mesaj, int key1,int key2);

	void Decryption(char* mesaj, int key1,int key2);

};

