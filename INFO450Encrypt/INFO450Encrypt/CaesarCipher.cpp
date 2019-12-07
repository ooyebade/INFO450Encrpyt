#include <iostream>
#include <string>
#include <fstream>
#include "CaesarCipher.h"

using namespace std;

CaesarCipher::CaesarCipher()
{
	filePath = "";
	key = 0;
}
CaesarCipher::~CaesarCipher()
{

}
void CaesarCipher::cipherEncrypt(string filename)
{
	int length, letter; 
	ifstream inputFile;
	inputFile.open(filename, ios::in);
	if (!inputFile)
	{
		cout << "Could not open file. Please make sure the file exists and has been entered correctly." << endl;
		return; 
	}
	
	getline(inputFile, filePath, '|');
	char str[1000];
	length = filePath.length();
	for (int i = 0; i < length; i++)
	{
		letter = filePath[i];
		letter += key;
		if (letter > 130)
		{
			letter = letter - 26;
		}
		str[i] = (char)letter; 
	}
	inputFile.close(); 
}
void CaesarCipher::cipherDecrypt(string filename)
{
	int length, letter;
	ifstream inputFile;
	inputFile.open(filename, ios::in);
	if (!inputFile)
	{
		cout << "Could not open file. Please make sure the file exists and has been entered correctly." << endl;
		return;
	}

	getline(inputFile, filePath, '|');
	char str[1000];
	length = filePath.length();
	for (int i = 0; i < length; i++)
	{
		letter = filePath[i];
		letter += key;
		if (letter < 100)
		{
			letter = letter + 26;
		}
		str[i] = (char)letter;
	}
	inputFile.close();
}
void CaesarCipher::setKey(int k)
{
	key = k; 
}