#include "Entry.h"
#include "Hash.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(){
	/*
	int hashKey;
	int size = 323;
	int sum = 0;
	string s = "hello";

	for (int i = 0; i< (int) s.size(); ++i){
		cout << (int) s[i] << endl;
		sum += (int) s[i];
	}

	hashKey = sum%size;

	cout << hashKey << endl;
	*/
	Hash<string>* hash = new Hash<string>();
	hash->insert("a", "hi");
	hash->insert("b", "of");
	hash->insert("e", "to");
	hash->insert("h", "on");
	hash->insert("g", "bye");
	hash->lookup("a");
	hash->lookup("b");
	hash->remove("a");
	hash->lookup("g");
	hash->remove("e");
	hash->lookup("e");
}
