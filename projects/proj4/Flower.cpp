// File: Flower.cpp (Child Class of Plant)
// Project: CMSC 202 Project 4, Spring 2017
// Author: Siril Pattammady
// Class file for Flower.h file
// Date:4/27/2017 
// Lab Section: 13
// E-Mail: psiril1@umbc.edu
// Description:
// File that holds the functions for the flower.h file
// Flower can be diseased 20% each month, will grow to the size
// of 3 and after they will flower. Once they start flowering
// they will drop their petals and will die.

#include "Flower.h"
//Title: Flower
//Pre: None
//Post: Default constructor
Flower::Flower():Plant(){
  
  m_isFlowering = false;
}

//Title: Plant(int, string)
//Pre: None
//Post: Constructor with custom petals and color
Flower::Flower(int numPetals, string color):Plant(){

  m_numPetals = numPetals;
  m_color = color;
    
}

//Title: die
//Pre: Flower
//Post: Sets isAlive to false and numPetals to 0
void Flower::die(){

  SetIsAlive(false);
  m_numPetals = 0;
  cout<< "The flower dies." << endl;
}

//Title: virtual tick
//Pre: Flower
//Post: A month passes is the flower's life
void Flower:: tick(){

  //Updates size
  if(GetIsDiseased() == false){
    SetSize(GetSize()+1);
  }
  
  //20% chance of being diseased 
  if(rand()%100 < 20){
    SetIsDiseased(true);
  }
  else{
    SetIsDiseased(false);
  }

  // Flower starts flowering when size = 3
  if(GetSize() == 3){
    m_isFlowering = true;
  }
  //The month after they drop the petals and after that they die
  else if(GetSize() == 4){
    cout<<"The flower drop its petals."<<endl;
    SetSize(GetSize()+1);
  }
  else if(GetSize() > 4){
    die();
  }
}

//Title: operator<< (Overloaded << operator)
//Pre: Flower
//Post: Inserts the stream information about the flower
ostream &Flower :: operator<<(ostream& os) {

  //Determining the size of the flower
  string Size;
  if(GetSize() <= 1){
    Size = "Seedling";
  }
  else if(GetSize() == 2){
    Size = "Medium-sized";
  }
  else{
    Size = "Fully Mature";
  }
  //Determining if the flower is alive
  string isAlive;
  if(GetIsAlive() == true){
    isAlive = "Alive";
  }
  else{
    isAlive = "Dead";
  }
  //If it is flowering or not
  string isFlowering;
  if(GetSize() >= 3){
    isFlowering = "Flowering";
  }
  
  else{
    isFlowering = "Not Flowering";
  }
  //If it is Diseased
  string Diseased;
  if(GetIsDiseased() == true){
    Diseased = "Diseased";
  }
  else{
    Diseased = "Not Diseased";
  }
  
  // Overloaded Output for Flower
  if(GetIsAlive()==false){
    os<< "Flower(Dead)" << endl;
  }
  else{
  os << "Flower (" << Size <<" : "<<isAlive << " : "<<isFlowering<<" : " <<Diseased << ")"<< endl;
  }
  return os;
}

