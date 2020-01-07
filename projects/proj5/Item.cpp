// File: Item.cpp
// Project: CMSC 202 Project 5, Spring 2017
// Author: Siril Pattammady
// Class file for Item.h file
// Date: 5/11/2017
// Lab Section: 13
// E-Mail: psiril1@umbc.edu
// Description:
// Gets name and weight to create Item object that stores information
// Stores in as a string and float

#include "Item.h"


//Default Constructor
Item:: Item(){

}

//Name: Item() and Item(string, float) - Default and Overloaded Constructor
//Precondition: None
//Postcondition: Creates an item
Item::Item(string iName, float iWeight){

  m_name = iName;
  m_weight = iWeight;
}

//Name: GetName/GetWeight
//Precondition: None
//Postcondition: Returns name or weight
string Item::GetName()const{

  return m_name;
}

float Item::GetWeight()const{

  return m_weight;
}
