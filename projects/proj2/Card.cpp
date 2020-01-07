//Author: Siril Pattammady
//File: Card.cpp
//Date: March 6,2017
//Implemntation of the Card Class
//Description: Card Class file that goes through text documents
// to access int and string description of cards and returns them.

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "Card.h"

// Default Constructor
Card::Card()
{

}
// Constructor
// Sets type and description to int and string variables
Card::Card(int type, string desc)
{
  type = m_type;
  desc = m_desc;
}

// Acessors

int Card::GetType(){

  return m_type;
  
}

string Card::ToString(){

  return m_desc;
}
