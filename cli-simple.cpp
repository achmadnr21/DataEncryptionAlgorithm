#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "DES_algorithm_simple.cpp"

using namespace std;
int main(int argc, char* argv[]){
	std::string command = argv[1];
	std::string key = argv[2];
	std::string arg1 = argv[3];
	std::string arg2 = argv[4];
	// std::string arg3 = argv[5];
	DES myenc;
	try {
		myenc.setKeyStrHex(key);
	}
	catch (...) {
		myenc.setKeyStr(key);
	// Block of code to handle errors
	}
	
	if(command == "-e"){
		if(arg1 == "-hex"){
			myenc.encrypt_strhex(arg2);
		}
		else if(arg1 == "-text"){
			myenc.encrypt(arg2);
		}
		else{
			myenc.encrypt_strhex(arg1);

		}

	}else if(command == "-d"){
		if(arg1 == "-hex"){
			myenc.decrypt_strhex(arg2);
		}
		else{
			printf("No Input");

		}
	}else{
		printf("Unknown Command!\n");
	}
return 0;
}
