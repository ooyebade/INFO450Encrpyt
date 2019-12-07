#include <iostream>
#include <string>
#include <fstream>
#include "CaesarCipher.h"

using namespace std;

int main()
{
	int selection = 1;
	int key = 0; 
	cout << "This application will allow user to encrypt and decrypt a file." << endl;
	CaesarCipher myCaesarCipher;
	string fileLocation;

	do
	{
		cout << "1. Encrypt File." << endl;
		cout << "2. Decrypt File." << endl;
		cout << "0. Exit." << endl;
		cout << "Enter a number to choose from the above options" << endl;
		cin >> selection;
		cin.ignore(); 

		if (selection == 0)
		{
			break;
		}
		else if (selection == 1)
		{
			cout << "Enter an integer between 1 and 26. This is the key: ";
			cin >> key;
			myCaesarCipher.setKey(key);
			cin.ignore();

			cout << "Enter the full file name: ";
			getline(cin, fileLocation); 
			myCaesarCipher.cipherEncrypt(fileLocation);
			cout << "\nSuccessfully encrypted the file.";
		}
		else if (selection == 2)
		{
			cout << "Enter an integer between 1 and 26. This is the key: ";
			cin >> key;
			myCaesarCipher.setKey(key);
			cin.ignore();

			cout << "Enter the full file name: ";
			getline(cin, fileLocation);
			myCaesarCipher.cipherEncrypt(fileLocation);
			cout << "\nSuccessfully decrypted the file.";
		}
		else
		{
			cout << "Invalid response. Try again!" << endl;
		}
	} while (selection != 0); 

	system("pause");
	return 0; 
}