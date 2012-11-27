#include "Entry.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(){
	int hash;
	int size = 323;
	int sum = 0;
	string s = "hello";

	for (int i = 0; i< (int) s.size(); ++i){
		cout << (int) s[i] << endl;
		sum += (int) s[i];
	}

	hash = sum%size;

	cout << hash << endl;

}
