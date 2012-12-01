#ifndef __HASH_H__
#define __HASH_H__

#include "Entry.h"
#include <list>
#include <vector>

using std::vector;
using std::list;

template <typename V>
class Hash {
	private:
		vector<list<Entry<V>* > > table;  //vector
		int hashKey(string k);		 //declaration for hash function
	
	public:
		Hash<V>();
		V lookup(string k);
		void insert(string k, V v);
		void remove(string k);


};

#endif
