// File: Tqueue.h
// Project: CMSC 202 Project 5, Spring 2017
// Author: Siril Pattammady
// Templated Tqueue class that calls header is implemented below
// Date: 5/11/2017
// Lab Section: 13
// E-Mail: psiril1@umbc.edu
// Description:
// Templated queue class that uses a dynamically allocated array.
// Consists of copy constructor and overloaded operator.
// Passes in class T and an intger (N)

#ifndef TQUEUE_H
#define TQUEUE_H

#include <iostream>
#include <cstdlib>
using namespace std;

template <class T, int N>
class Tqueue {
public:
  //Name: Tqueue - Default Constructor
  //Precondition: None (Must be templated)
  //Postcondition: Creates a queue using dynamic array
  Tqueue(); //Default Constructor
  //Name: Copy Constructor - Not used but required for project 5
  //Precondition: Existing Tqueue
  //Postcondition: Copies an existing Tqueue
  Tqueue( const Tqueue<T,N>& x ); //Copy Constructor
  //Name: Destructor
  //Precondition: Existing Tqueue
  //Postcondition: Destructs existing Tqueue
  ~Tqueue(); //Destructor
  //Name: enqueue
  //Precondition: Existing Tqueue
  //Postcondition: Adds item to back of queue
  void enqueue(T data); //Adds item to queue (to back)
  //Name: dequeue
  //Precondition: Existing Tqueue
  //Postcondition: Removes item from front of queue
  void dequeue(T &); //Removes item from queue (from front)
  //Name: queueFront
  //Precondition: Existing Tqueue
  //Postcondition: Retrieve front (does not remove it)
  void queueFront(T &);    // Retrieve front (does not remove it)
  //Name: isEmpty
  //Precondition: Existing Tqueue
  //Postcondition: Returns 1 if queue is empty else 0
  int isEmpty(); //Returns 1 if queue is empty else 0
  //Name: isFull
  //Precondition: Existing Tqueue
  //Postcondition: Returns 1 if queue is full else 0
  int isFull(); //Returns 1 if queue is full else 0
  //Name: Overloaded assignment operator - Not used but required for project 5
  //Precondition: Existing Tqueue
  //Postcondition: Sets one Tqueue to same as a second Tqueue using =
  Tqueue<T,N>& operator=( Tqueue<T,N> y); //Overloaded assignment operator for queue
private:
  T* m_data; //Data of the queue (Must be dynamically allocated array)
  int m_front; //Front of the queue
  int m_back; //Back of the queue
};

//**** Add class definition below ****


template <class T, int N>
  //Name: Tqueue - Default Constructor
  //Precondition: None (Must be templated)
  //Postcondition: Creates a queue using dynamic array
  Tqueue<T,N>::Tqueue(){

  m_data = new T[N];
  m_front = 0;
  m_back = 0;
  
}
//Name: Copy Constructor - Not used but required for project 5
//Precondition: Existing Tqueue
//Postcondition: Copies an existing Tqueue
template <class T,int N>
  Tqueue<T,N>::Tqueue(const Tqueue<T,N>& x )

  :m_front(x.m_front),m_back(x.m_back){

  //Remember rule of three 
  m_data = new T[N];
  
  for(int i = 0; i < N; i++){
    m_data[i] = x.m_data[i];
  }
}
//Name: Destructor
//Precondition: Existing Tqueue
//Postcondition: Destructs existing Tqueue
template <class T, int N>
  Tqueue<T,N>::~Tqueue(){

  delete [] m_data;
}
//Name: enqueue
//Precondition: Existing Tqueue
//Postcondition: Adds item to back of queue
template <class T,int N>
  void Tqueue<T,N>::enqueue(T data){

  if( isFull())
    {
      cout << "Queue is Full" << endl;
    }
  else{
    m_back = (m_back ++) % N;
    m_data[m_back] = data;
    
  }

}
//Name: dequeue
//Precondition: Existing Tqueue
//Postcondition: Removes item from front of queue
template <class T, int N>
  void Tqueue<T,N>::dequeue(T & data){

  if( isEmpty()){
    cout<< "Queue is Empty" << endl;
  }
  else{
    data = m_data[m_front];
    m_front = (m_front++) % N;
  }

}
//Name: queueFront
//Precondition: Existing Tqueue
//Postcondition: Retrieve front (does not remove it)
template <class T, int N>
  void Tqueue<T,N>::queueFront(T & data){

  if(isEmpty()){
    cout << "Queue is empty" << endl;
  }
  else{
    data = m_data[m_front];
  }

}
//Name: isEmpty
//Precondition: Existing Tqueue
//Postcondition: Returns 1 if queue is empty else 0
template <class T, int N>
  int Tqueue<T,N>:: isEmpty(){
  
  return(m_back == m_front);

}
//Name: isFull
//Precondition: Existing Tqueue
//Postcondition: Returns 1 if queue is full else 0
template <class T,int N>
  int Tqueue<T,N>:: isFull(){

  return (m_back == N);
}


//Name: Overloaded assignment operator - Not used but required for project 5
//Precondition: Existing Tqueue
//Postcondition: Sets one Tqueue to same as a second Tqueue using =
template <class T, int N>
  Tqueue<T,N>& Tqueue<T,N>::operator=( Tqueue<T,N> y){

  m_front = 0;
  m_back = 0;
  //Remember rule of 3
  if(this!= &y){
    for(int i =0; i < y.m_back; i++){
      m_data[i] = y.m_data[i];
      m_back++;
    }
  }
  return *this;
}
  
#endif
