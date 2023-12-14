#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<iostream>
#include "Node.h"

template<typename K,typename T>
class LinkedList
{
	private:
		Node<K,T>* first;
		int length;
		bool isEmpty();
	
	public:
		LinkedList();
		~LinkedList();
		void add(K key,T* entity);
		T* get(K);
		void display();
};

template<typename K,typename T>
LinkedList<K,T>::LinkedList():first(NULL),length(0){}

template<typename K,typename T>
LinkedList<K,T>::~LinkedList(){
	Node<K,T>* del = first;
	while(first){
		first = del ->next;
		delete del;
		del=first;
	}
	delete this;
}

template<typename K,typename T>
void LinkedList<K,T>::add(K key,T* entity){
	Node<K,T>* node = new Node<K,T>(key,entity);
	if(node->next==NULL)
	cout << "NULL ok" << endl;
	node->next=first;
	first=node;
	length++;
}

template<typename K,typename T>
T* LinkedList<K,T>::get(K key){
	Node<K,T>* current=first;
	while(current){
		if(current->key==key)
			return current->entity;
		current = current->next; 
	}
	return NULL;
}

template<typename K,typename T>
void LinkedList<K,T>::display(){
	Node<K,T>* current = first;
	while(current){
		cout << current->entity->name << endl;
	current=current->next;
	}
	
	
	
}



#endif
