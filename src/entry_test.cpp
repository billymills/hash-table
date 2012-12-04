#include "Entry.h"
#include "Hash.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(){

	string myArray [20] = {"zero","one","two","three","four","five","six","seven","eight","nine",
		"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
		"eighteen","nineteen"};

	double dArray [20] = {0.1,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.1,11.1,12.2,13.3,14.4,15.5,
		16.6,17.7,18.8,19.9};
	
	string sArray [20] = {"cero","uno","dos","tres","quatro","cinco","seis","siete","ocho","nueve",
		"diez","once","doce","trece","catorce","quince","dieciseis","diecisiete",
		"dieciocho","diecinueve"};

	Hash<int>* intHash = new Hash<int>();
	for(int i = 0;i < 20;++i){
		intHash->insert(myArray[i], i);
	}

	for(int i = 0;i< 20;++i){
		cout << "key: " << myArray[i] << " found - value: " << *(intHash->lookup(myArray[i])) << endl;
	}

	cout << "removing all entries..." << endl;

	for(int i = 19;i>=0;--i){
		intHash->remove(myArray[i]);
	}

	for(int i = 0;i< 20;++i){
		if (intHash->lookup(myArray[i]) == 0){
			cout << "key: " << myArray[i] << " not found" << endl;
		}
	}

	delete intHash;

	Hash<double>* doubleHash = new Hash<double>();
	for(int i = 0;i < 20;++i){
		doubleHash->insert(myArray[i], dArray[i]);
	}

	for(int i = 0;i< 20;++i){
		cout << "key: " << myArray[i] << " found - value: " << *(doubleHash->lookup(myArray[i])) << endl;
	}
	
	cout << "removing all entries..." << endl;

	for(int i = 19;i>=0;--i){
		doubleHash->remove(myArray[i]);
	}

	for(int i = 0;i< 20;++i){
		if (doubleHash->lookup(myArray[i]) == 0){
			cout << "key: " << myArray[i] << " not found" << endl;
		}
	}
	
	delete doubleHash;

	Hash<string>* stringHash = new Hash<string>();
	for(int i = 0;i < 20;++i){
		stringHash->insert(myArray[i], sArray[i]);
	}

	for(int i = 0;i< 20;++i){
		cout << "key: " << myArray[i] << " found - value: " << *(stringHash->lookup(myArray[i])) << endl;
	}
	
	cout << "removing all entries..." << endl;

	for(int i = 19;i>=0;--i){
		stringHash->remove(myArray[i]);
	}

	for(int i = 0;i< 20;++i){
		if (stringHash->lookup(myArray[i]) == 0){
			cout << "key: " << myArray[i] << " not found" << endl;
		}
	}
	
	delete stringHash;
}
