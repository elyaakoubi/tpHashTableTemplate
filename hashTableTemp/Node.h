#ifndef NODE_H
#define NODE_H

template<typename K,typename T>
class Node{
public :
	K key;
	T* entity;
	Node<K,T>* next;
	
	Node(K,T*);
	~Node();
};

template<typename K,typename T>
Node<K,T>::Node(K key,T* entity)
{
	this->key=key;
	this->entity=entity;
	this->next=NULL;
	
} 

template<typename K,typename T>
Node<K,T>::~Node(){
	delete entity;
}

#endif
