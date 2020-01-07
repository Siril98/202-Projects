// File: Vegetable.cpp(Child of Plant Class)
// Project: CMSC 202 Project 4, Spring 2017
// Author: Siril Pattammady
// Class file for Vegetable.h file
// Date:4/27/2017 
// Lab Section: 13
// E-Mail: psiril1@umbc.edu
// Description:
// File for the Vegetable.h file. Holds information about
// vegetables. They are harvested when they have a size of 5
// Specific names for each size. However will not grow
// if it hits the 20% chance of being diseased.

#include "Vegetable.h"
#include <iostream>
//Title: Vegetable
//Pre: None
//Post: Default constructor
Vegetable::Vegetable():Plant(){
  SetSize(0);
  SetIsAlive(true);
  SetIsDiseased(false);
}
//Title: Vegetable(string)
//Pre: None
//Post: Constructor looking for vegetable color
Vegetable::Vegetable(string color):Plant(){

  m_color = color;  
}

//Title: die
//Pre: None
//Post: Vegetable isAlive = false
void Vegetable:: die(){

  
  SetIsAlive(false);
 
}
//Title: virtual harvest
//Pre: None
//Post: Harvest the vegetables and calls die
void Vegetable:: harvest(){

  cout <<"The vegetables has been harvested"<< endl;
  die();
}
//Title: virtual tick
//Pre: None
//Post: A month passes in the vegetable's life
//Vegetables are harvested when they have a size of 5
//Vegetables grow every tick that they aren't diseased
//Vegetables have a 20% chance of being diseased each month
//Vegetables are "un" diseased at the beginning of each month
void Vegetable::tick(){

  //Updates Size
  if(GetIsDiseased() == false){
      SetSize(GetSize()+1);
    }
  // 20% chance of being diseased each month
  if(rand()%100 < 20){
    SetIsDiseased(true);

  }
  else
    {
      SetIsDiseased(false);
    }

  //Harvest after 5th month (6)
  if(GetSize() == 6){
    harvest();
  }
}

//Title: operator << (Overloaded << operator)
//Pre: None
//Post: Inserts into the stream the vegetable's information
ostream& Vegetable:: operator<<(ostream& os){
  //Check for if its alive/dead
  
  string isAlive;
  if(GetIsAlive() == true){
    isAlive = "Alive";
  }
  else{
    isAlive = "Dead";
  }
  //Check if it's harvestable
  string harvest;
  if(GetSize() == 5){
    harvest = "Harvestable";

  }
  else{
    harvest = "Not Harvestable";
  }
  //Check if its diseased
  string Diseased;
  if(GetIsDiseased() == true){
    Diseased = "Diseased";
  }
  else{
    Diseased = " Not Diseased";
      }

  // Overloaded Output for Vegetable Class
  if(GetIsAlive() == false){
    os << "Vegetable : Harvested" << endl;
  }
  else{
    os << "Vegetable ("<< isAlive << " : "<< harvest << " : " << Diseased << ")" <<endl;
  }
  return os;
}

