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

}

template <typename V>
V Hash<V>::lookup(string k){
	return 0;
}

template <typename V>
void Hash<V>::remove(string k){

}

template <typename V>
int Hash<V>::hash(string k){
	return 0;
}

//template class Hash<int>;
//template class Hash<double>;
//template class Hash<string>;
