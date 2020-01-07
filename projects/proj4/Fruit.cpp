// File: Fruit.cpp(Not a Child Class)
// Project: CMSC 202 Project 4, Spring 2017
// Author: Siril Pattammady
// Class file for Fruit.h file
// Date: 4/27/2017
// Lab Section: 13
// E-Mail: psiril1@umbc.edu
// Description:
// Fruit class for Fruit.h file
// Simply gets and returns a color
#include "Fruit.h"


// Fruit()
// pre:  -
// post: fruit object with random color
Fruit::Fruit(){

  m_color = "Green";

}

//  getColor()
// pre:  -
// post: returns own color
string Fruit::GetColor(){

  return m_color;

}
