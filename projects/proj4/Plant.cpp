// File: Plant.cpp(Parent class)
// Project: CMSC 202 Project 4, Spring 2017
// Author: Siril Pattammady
// Class file for Plant.h file
// Date: 4/27/2016 
// Lab Section: 13
// E-Mail: psiril1@umbc.edu
// Description:
// Parent class to Vegetable, Flower, and Trees
// Has getters and setters for each private member variable
// Also have virtual functions and overloaded operator

#include "Plant.h"
//Title: Plant
//Pre: None
//Post: Abstract class (cannot be called)
Plant::Plant(){

  m_isDiseased = false;
  m_isAlive = true;
  m_size = 0;
  
}
// virtual ~Plant()
// pre:  -
// post: destroys plant object
Plant::~Plant(){

  
}
//Title: GetIsDiseased
//Pre: None
//Post: returns m_isDiseased
bool Plant::GetIsDiseased(){

  return m_isDiseased;
  
}
//Title: GetIsAlive
//Pre: None
//Post: returns m_isAlive
bool Plant::GetIsAlive(){

  return m_isAlive;
  
}
//Title: GetSize
//Pre: None
//Post: returns m_size
int Plant::GetSize(){

  return m_size;
  
}
//Title: SetSize(int)
//Pre: None
//Post: m_size is set
void Plant::SetSize(int size){

  m_size = size;
  
}

//Title: SetIsAlive(bool)
//Pre: None
//Post: m_isAlive is set
void Plant::SetIsAlive(bool isAlive){

  m_isAlive = isAlive;
  
}
//Title: SetIsDiseased(bool)
//Pre: None
//Post: m_isDiseased is set
void Plant::SetIsDiseased(bool isDiseased){

  m_isDiseased = isDiseased;
  
}
//Title: die
//Pre: Virtual
//Post: Virtual
void Plant::die(){

}
//Title: tick
//Pre: Virtual
//Post: Virtual
void Plant::tick(){

}
//std::ostream &operator>>(std::ostream&)
// pre:  Virtual
// post: Virtual
ostream &Plant:: operator<<(ostream& os){

  return os;
}
