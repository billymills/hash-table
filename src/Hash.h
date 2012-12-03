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
		int hash(string k);		 //declaration for hash function
		int size;
	
	public:
		Hash<V>();
		~Hash<V>();
		bool lookup(string k);
		void insert(string k, V v);
		bool remove(string k);


};

#endif
