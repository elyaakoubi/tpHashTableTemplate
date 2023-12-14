#ifndef HASHTABLE_H
#define HASHTABLE_H
#include "LinkedList.h"

template<typename K,typename T>
class HashTable
{
	private:
		int length;
		LinkedList<K,T>** list;
		unsigned int hash(K);
	public:
		HashTable(int);
		~HashTable();
		int put(K,T*);
		T* get(K);
		void display();
		LinkedList<K,T>* getList(int);
};

#endif
