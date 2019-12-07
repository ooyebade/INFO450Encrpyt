#pragma once
#include <iostream>
#include <string>

using namespace std; 

class CaesarCipher
{
private:
	string filePath;
	int key;
public:
	CaesarCipher();
	~CaesarCipher();
	void cipherEncrypt(string filename);
	void cipherDecrypt(string filename); 
	void setKey(int k);
};