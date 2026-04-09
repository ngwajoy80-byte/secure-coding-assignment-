#include <iostream>
#include <string>
using namespace std;

//simple function to simulate encryption

void encrypt(string text){
	for(int i = 0; i < text.length(); i++){
		text[i] = text[i] + 3;   // simple shift encryption
	}
	cout <<"encrypted text:" << text << endl;
}

int main(){
	string message;
	
	cout <<"enter message:";
	getline(cin, message);
	
	encrypt(message);  // simulate DES/AES style encryption
	
	return 0;
}
