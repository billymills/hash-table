#include "Entry.h"
#include "Hash.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(){
	

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
	delete hash;
}
