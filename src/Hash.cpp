#include <iostream>
#include <string>
#include "Hash.h"

using std::cout;
using std::endl;
using std::string;

template <typename V>
Hash<V>::Hash(){
	size = 101;
	table.resize(size);
}

template <typename V>
void Hash<V>::insert(string k, V v){
	int index = hash(k);
	
	typename list<Entry<V>* >::iterator it;
	for (it=table[index].begin(); it != table[index].end(); ++it){
		if ((*it)->getKey() == k){
			(*it)->setValue(v);
			return;
		}
	}

	table[index].push_back(new Entry<V>(k, v));
}

template <typename V>
bool Hash<V>::lookup(string k){
	int index = hash(k);

	typename list<Entry<V>* >::iterator it;
	for (it=table[index].begin(); it != table[index].end();++it){
		if ((*it)->getKey() == k){
			cout << "Key: " << k << "  Value: " << (*it)->getValue() << endl;
			return true;
		}
	}

	cout << "Key-  " << k << "  -not found!" << endl;
	
	return false;	
}

template <typename V>
bool Hash<V>::remove(string k){
	int index = hash(k);
	
	typename list<Entry<V>* >::iterator it;
	for (it=table[index].begin(); it != table[index].end(); ++it){

		if ((*it)->getKey() == k){
			table[index].erase(it);
			cout << "Key: " << k << " Value: " << (*it)->getValue() << " removed" << endl;
			return true;
		}

	}

	cout << "Key-  " << k << "  -not found" << endl;

	return false;
}

template <typename V>
int Hash<V>::hash(string k){
	int sum = 0;
	int hash;
	
	for(int i = 0; (unsigned int) i < k.size();++i){
		sum += (int) k[i];
	}

	hash = sum%size;
	return hash;
}

template class Hash<int>;
template class Hash<double>;
template class Hash<string>;
