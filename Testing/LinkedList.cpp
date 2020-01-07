#include "LinkedList.h"



LinkedList::LinkedList(){

  m_head =NULL;
  m_tail = NULL;
  m_size = 0;

}
//destructor
LinkedList::~LinkedList(){
  
}


void LinkedList::InsertBegin(int num,string name){

  //allocates memory for a new node and points it to create a new Node
  //No memory yet
  Node* newNode = new Node();

  // Go into that member variable and set value to num and name
  newNode->m_num = num;
  newNode->m_name = name;

  if(m_head == NULL){
    m_head = newNode;
    m_tail = newNode;
  }

  else{

    newNode->m_next = m_head;
    m_head = newNode;
    
    
    
  }
  m_size++;
}

void LinkedList::RemoveBegin(){
  
  Node* del = m_head;

  while(del != NULL){

    m_head = m_head ->m_next;
    delete del;

    del = m_head;
  }

  m_head = NULL;
  m_tail = NULL;
}
  
void LinkedList::PrintList(){

  Node* temp;

  temp = m_head;
  while(temp != NULL){
  cout<< m_name << m_num << endl;

  temp = temp->m_next;
  }
}
