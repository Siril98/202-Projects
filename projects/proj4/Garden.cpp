// File: Garden.cpp
// Project: CMSC 202 Project 4, Spring 2017
// Author: Siril Pattammady
// Class file for Garden.h file
// Date: 4/27/2017 
// Lab Section: 13
// E-Mail: psiril1@umbc.edu
// Description:
// A garden class whose main job is to contain a vector
// of plant pointers. It can take in teh type and quantity
// of the plant and calls the Tick() that manages the month
// for all objects in the garden.
#include "Garden.h"


//Title: Garden() Constructor
//Pre: Garden
//Post: Garden with no plants
Garden::Garden(){



}
//Title: Garden() Destructor
//Pre: Garden
//Post: Garden object (and plants) are destroyed
Garden::~Garden(){

  for(unsigned int i =0; i < m_garden.size(); i++){
    delete m_garden.at(i);
  }
  
}

//Title: addPlant(int, int)
//Pre: Requires type of plant (1 = Flower, 2 = Vegetable, 3 = Tree) and the quantity of that type
//Post: Plant added to the garden vector
void Garden::addPlant(int type, int quantity){

  // Creates flower object/pointer
  if(type == 1){
    for(int i = 0; i < quantity; i++){
      Plant *flower = new Flower();
      m_garden.push_back(flower);
    }
  }
  // Creates vegetable object/pointer
  else if(type == 2){
    for(int i=0; i < quantity; i++){
    Plant *vegetable = new Vegetable();
    m_garden.push_back(vegetable);
    }
  }
  // Creates tree object/pointer
  else if(type == 3){
    for(int i = 0; i < quantity; i++){
      Plant *tree = new Tree();
      m_garden.push_back(tree);
    }
  }
  
}
//Title: tick(int)
//Pre: Garden One tick = One month
//Post: Calls tick for each item in the garden for the duration passed to it
void Garden::tick(int months){

  // Nested loop to iterate over the months
  // Calling tick() for each plant pointer in the garden vector
  // Calls the overloaded cout for each plant pointer in vector
  for(int i=0; i < months; i++){
    cout<<"MONTH : "<< i+1 << endl;
    for(unsigned int j =0; j < m_garden.size(); j++){
      m_garden.at(j) -> tick();
      cout<<j+1<<":";
      *m_garden.at(j) << cout ;

    }
  }

  m_month = months;
}
//Title: tick(1)
//Pre: Garden
//Post: Calls tick for each item in the garden for exactly one month
void Garden::tick(){

  tick(1);
  
}
//Title: getSize
//Pre: Garden
//Post: returns how many items are in the garden
int Garden::getSize(){
  
  int size = m_garden.size();
  m_gardenSize = size;
  
  return m_gardenSize;
}

//Title: getMonths
//Pre: Garden
//Post: returns how many months have passed since start of simulation
//    (i.e., how many ticks)
int Garden::getMonths(){
  
  return m_month;
}
