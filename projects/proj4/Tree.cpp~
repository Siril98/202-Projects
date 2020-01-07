// File: Tree.cpp (Child of Plant Class)
// Project: CMSC 202 Project 4, Spring 2017
// Author: Siril Pattammady
// Class file for Tree.h file
// Date: 4/27/2017
// Lab Section: 13
// E-Mail: psiril1@umbc.edu
// Description:
// Tree class for Tree.h file and to create Tree Object
// Trees will produce fruits once it reaches the "mature"
// size. A tree has a 20% chance of diseased each month and will
// not die but just not be able to grow or fruit.
#include "Tree.h"
#include "Garden.h"

//Title: Tree () Constructor
//Pre: Garden
//Post: Tree object
Tree::Tree():Plant(){

  SetIsAlive(true);
  SetIsDiseased(false);
  SetSize(0);
}

//Title: ~Tree
//Pre: Garden
//Post: Destroys tree (and fruit?)
Tree::~Tree(){

  ClearFruit();
  
}

//Title: die
//Pre: Garden
//Post: A tree can die after 120 months
void Tree::die(){

  SetIsAlive(false);
  cout<< "The tree has died." << endl;

}

//Title: ClearFruit
//Pre: Garden and Tree with fruit
//Post: Clears all fruit from the tree
void Tree::ClearFruit(){

  int size = (int)m_fruit.size();

  for(int i=0; i < size ; i++){
    delete m_fruit.at(i);
  }
}


//Title: virtual void tick(Plant::EVENT)
//Pre: Garden
//Post: A month passes in the tree's life
void Tree:: tick(){

  //if tree is not diseased then it will grow
  if(GetIsDiseased()== false){ 
    SetSize(GetSize()+1);
  }
  
  //20% of being diseased each month
  if(rand()%100 < 20){
    SetIsDiseased(true);
  }
  else
    {
      SetIsDiseased(false);
    }
  
  //Adds fruit to the tree when its mature and not diseased
  if(GetSize()>36 && GetIsDiseased()== false){
      Fruit *fruit = new Fruit();
      m_fruit.push_back(fruit);
    }
}

ostream& Tree :: operator<<(ostream& os){

  // Variables for each instance/check for output
  string Size;
  string isAlive;
  string Fruiting;
  string isDiseased;

  //Determining what size the tree is called
  if(GetSize() < 12){
    Size = "Seedling";
  }
  else if(GetSize() < 24){
    Size = "Sapling";
  }
  else if(GetSize() < 36){
    Size = "Pole";
  }
  else{
    Size = "Mature";
  }
  // Determing if the Tree is Alive or Dead
  if(GetSize() < 120){
    isAlive = "Alive";
  }
  else{
    die();
    isAlive = "Dead";
  }
  // Determining if the Tree is fruiting or not
  if(GetSize() < 36){
    Fruiting = "Not Fruiting";
  }
  else{
    Fruiting = "Fruiting";
  }
  // Determining if the Tree is diseased
  if(GetIsDiseased() == false){
    isDiseased = "Not Diseased";
  }
  else{
    isDiseased = "Diseased";
    SetIsDiseased(false);
  }
  //Overloaded Output for Tree
  os << "Tree (" << Size <<  " : "<< isAlive << " : " << Fruiting<<" : " <<isDiseased << ")"<<endl;
       

  return os;

}

