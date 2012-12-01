#include <iostream>
#include <string>

#include "Hash.h"

using std::cout;
using std::endl;
using std::string;

template <typename V>
Hash<V>::Hash(){
	//set up table
	table.resize(11);
}

template <typename V>
void Hash<V>::insert(string k, V v){
	//Entry<V> newEntry = new Entry<V>(k, v)
	table[0].push_back(new Entry<V>(k, v));
}

template <typename V>
V Hash<V>::lookup(string k){
	return 0;
}

template <typename V>
void Hash<V>::remove(string k){

}

template <typename V>
int Hash<V>::hashKey(string k){
	return 0;
}

template class Hash<int>;
//template class Hash<double>;
//template class Hash<string>;
