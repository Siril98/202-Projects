// Header file for linked list
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<iostream>
#include<string>
using namespace std;

struct Node(){

  int m_num;
  string m_name;
  
  Node* m_next;

  
};

class LinkedList{

 public:

  //Constructor and Destructor
  LinkedList();
  ~LinkedList();

  void InsertBegin(int num, string name);
  void RemoveBegin();
  void PrintList();


 private:
  
  Node* m_head;
  Node* m_tail;
  int m_size;


};

#endif
