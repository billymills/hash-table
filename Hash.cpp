#include <iostream>
#include <string>

#include "Hash.h"

using std::cout;
using std::endl;
using std::string;

template <typename V>
Hash<V>::Hash(){
	//set up table
	size = 11;
	table.resize(size);
}

template <typename V>
void Hash<V>::insert(string k, V v){
	//Entry<V> newEntry = new Entry<V>(k, v)
	int index = hash(k);
	//cout << hash(k) << endl;
	//table[index].push_back(new Entry<V>("hi", 12));
	table[index].push_back(new Entry<V>(k, v));
}

template <typename V>
V Hash<V>::lookup(string k){
	int index = hash(k);
	//return table[index].front()->getValue();

	typename list<Entry<V>* >::iterator it;
	for (it=table[index].begin(); it != table[index].end();++it){
		if ((*it)->getKey() == k){
			return (*it)->getValue();
		}
	}
	cout << "Key not found" << endl;
	return 0;
}

template <typename V>
void Hash<V>::remove(string k){

}

template <typename V>
int Hash<V>::hash(string k){
	int sum = 0;
	int hash;
	//int size = 11;
	for(int i = 0; (unsigned int) i < k.size();++i){
		sum += (int) k[i];
	}

	hash = sum%size;
	return hash;
}

template class Hash<int>;
//template class Hash<double>;
template class Hash<string>;
