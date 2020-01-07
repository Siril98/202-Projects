#include "Delivery.h"
// File: Delivery.cpp
// Project: CMSC 202 Project 5, Spring 2017
// Author: Siril Pattammady
// Class file for Delivery.h file
// Date: 5/11/2017
// Lab Section: 13
// E-Mail: psiril1@umbc.edu
// Gets and returns name, numItem, and Minutes
// to create Delivery Object with information

//Default Constructor
Delivery:: Delivery(){

}

//Name: Delivery and Delivery(name, numItem, rtMinute) - Constructors
//Precondition: None
//Postcondition: Creates a delivery
Delivery::Delivery(string name, int numItem, int rtMinute){

  m_name = name;
  m_numItem = numItem;
  m_rtMinute = rtMinute;
}

//Name: GetName
//Precondition: None
//Postcondition: Returns m_name
string Delivery :: GetName() const{

  return m_name;
}

//Name: GetNumItem
//Precondition: None
//Postcondition: Returns m_numItem
int Delivery :: GetNumItem()const{

  return m_numItem;
}

//Name: GetRTMinute
//Precondition: None
//Postcondition: Returns m_rtMinute
int Delivery:: GetRTMinute()const{

  return m_rtMinute;
}
